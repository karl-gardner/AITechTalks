<h4 align="center">Author: Karl Gardner<br>Data Scientist, Chemical Engineer, PhD</h4>

<div align="center">
  <a href="https://www.depts.ttu.edu/che/research/li-lab/">
  <img src="https://github.com/karl-gardner/ml_code_reviews/assets/91646805/c4662e21-1e33-41fc-8a1d-c54f8e721a09"/></a><br><br>

  <a href="https://www.youtube.com/channel/UCzc59V6P4sqRHVvbzNeIKWg">
  <img src="https://github.com/karl-gardner/ml_code_reviews/blob/main/badges/YoutubeChannel.svg" height="32"/></a>

  <a href="https://www.linkedin.com/in/karl-gardner-5373a8142/">
  <img src="https://github.com/karl-gardner/ml_code_reviews/blob/main/badges/LinkedIn.svg" height="32"/></a>
  
  <a href="https://hastie.su.domains/Papers/ESLII.pdf">
  <img src="https://github.com/karl-gardner/ml_code_reviews/blob/main/badges/StatisticalLearning2.svg" height="32"/></a>
  
  <a href="https://roboflow.com/">
  <img src="https://user-images.githubusercontent.com/91646805/156641388-c609a6aa-8fce-47f0-a111-abfde9c5da05.svg" height="32"/></a><br>
  
  <a href="https://www.rsc.org/journals-books-databases/about-journals/lab-on-a-chip/">
  <img src="https://user-images.githubusercontent.com/91646805/169677461-13cb1d50-e7cf-457e-8777-cc6df29ce0bd.svg" height="32"/></a>
  
  <a href="https://colab.research.google.com/github/karl-gardner/droplet_detection/blob/master/yolov3.ipynb">
  <img src="https://user-images.githubusercontent.com/91646805/156640198-51f0ef4c-21c1-4d0f-aebd-861561dede95.svg" height="32"/></a>
  
  <a href="https://colab.research.google.com/github/karl-gardner/droplet_detection/blob/master/yolov5.ipynb">
  <img src="https://user-images.githubusercontent.com/91646805/156640073-0a7ad496-7691-4e1c-822c-b78f3e7d070b.svg" height="32"/></a>
  
  <a href="https://github.com/ultralytics">
  <img src="https://user-images.githubusercontent.com/91646805/156641066-fbc3635b-f373-4cb7-b141-9bcaad21beff.svg" height="32"/></a>



# Code Reviews of Popular Machine Learning Algorithms
Encapsulation of cells inside microfluidic droplets is central to several applications involving cellular analysis. Although, theoretically the encapsulation statistics are expected to follow Poisson distribution, experimentally this may not be achieved due to lack of full control of the experimental variables and conditions. Therefore, there is a need to automatically detect droplets and enumerate cell counts within droplets so that this can be used as process control feedback to adjust experimental conditions. In this study, we use a deep learning object detector called You Only Look Once (YOLO), an influential class of object detectors with several benefits over traditional methods. This paper investigates the application of both YOLOv3 and YOLOv5 object detectors in the development of an automated droplet and cell detector. Experimental data was obtained from a microfluidic flow focusing device with a dispersed phase of cancer cells. The microfluidic device contained an expansion chamber downstream of the droplet generator, allowing for visualization and recording of cell-encapsulated droplet images. In the procedure, a droplet bounding box is predicted, then cropped from the original image for the individual cells to be detected through a separate model for further examination. The system includes a production set for additional performance analysis with Poisson statistics while providing an experimental workflow with both droplet and cell models. The training set is collected and preprocessed before labeling and applying image augmentations, allowing for a generalizable object detector. Precision and recall were utilized as a validation and test set metric, resulting in a high mean average precision (mAP) metric for an accurate droplet detector. To examine model limitations, the predictions were compared to ground truth labels, illustrating that the YOLO predictions closely matched with the droplet and cell labels. Furthermore, it is demonstrated that droplet enumeration from the YOLOv3 model is consistent with hand counted ratios and the Poisson distribution, confirming that the platform can be used in real-time experiments for encapsulation optimization.
</div>

![project_workflow](https://user-images.githubusercontent.com/91646805/189386678-4d32ead1-e4aa-4ded-9eb1-2ac808e1cb2c.jpg)

