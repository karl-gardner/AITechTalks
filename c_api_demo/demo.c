#include <stdio.h>
#include <stdlib.h>
#include <xgboost/c_api.h>

#define safe_xgboost(call) {                                            \
int err = (call);                                                       \
if (err != 0) {                                                         \
  fprintf(stderr, "%s:%d: error in %s: %s\n", __FILE__, __LINE__, #call, XGBGetLastError()); \
  exit(1);                                                              \
}                                                                       \
}

int main() {

  DMatrixHandle train, test;
  safe_xgboost(XGDMatrixCreateFromURI("{\"uri\": \"../agaricus.txt.train?format=libsvm\", \"silent\": 1}", &train));
  safe_xgboost(XGDMatrixCreateFromURI("{\"uri\": \"../agaricus.txt.test?format=libsvm\", \"silent\": 1}", &test));

  BoosterHandle booster;
  #define EVALDMATSSIZE 2
  DMatrixHandle eval_dmats[EVALDMATSSIZE] = {train, test};
  XGBoosterCreate(eval_dmats, EVALDMATSSIZE, &booster);

  // default max_depth =6
  safe_xgboost(XGBoosterSetParam(booster, "max_depth", "3"));
  safe_xgboost(XGBoosterSetParam(booster, "objective", "binary:logistic"));

  int num_of_iterations = 100;
  const char* eval_names[EVALDMATSSIZE] = {"train", "test"};
  const char* eval_result = NULL;

  for (int i = 0; i < num_of_iterations; ++i) {
    // Update the model performance for each iteration
    safe_xgboost(XGBoosterUpdateOneIter(booster, i, train));

    // Give the statistics for the learner for training & testing dataset in terms of error after each iteration
    safe_xgboost(XGBoosterEvalOneIter(booster, i, eval_dmats, eval_names, EVALDMATSSIZE, &eval_result));
    printf("%s\n", eval_result);
  }
  return 0;
}
