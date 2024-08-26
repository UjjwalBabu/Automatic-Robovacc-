# Automatic-Robovacc-

The instrumental work is about making a robot which have capable of vacuuming  dust particles and collecting waste materials like plastic covers using a rotating  brush type setup infront of the bot, and also have a advanced robotic arm that  will pick bottle with the help of image classification., in the floor of a room or areas like parks and the road, pathways by eliminating the need to manually collecting the waste by automating the process.

INTRODUCTION

• In the current situation ,India is facing various challenges in the environment by the improper waste collection,treatment,transport,disposal. By making advancement in the present robotic vacuum cleaner ,it allows to be used in the public areas.The robot allows proper cleaning of wastes without any human intervention. Mainly used for the removal of garbage and other waste materials from the public places such as parks ,malls and pathways,parking areas and auditorium etc .Uses vacuum cleaning mechanism and a waste collecting mechaninsm with a robotic arm for waste removal and collection Sensors used for the detection and provide pathways.

Basic functions ; path planning ,obstacle avoidance,smart waste monitoring etc…

Our main objectives are ;

• Wireless control mechanism of robot 

• Automatic movement of robot with decision making

• Real time Vacuum Cleaner action and waste picking with robotic arm

• Waste disposal without any human intervention


CIRCUIT DIAGRAM

![image](https://github.com/user-attachments/assets/b3b089e4-0276-4775-bad6-3d61864051f2)


WORKING

In our proposed method, Raspberry PI and Node MCU is used as a core controller. The ultrasonic  sensor is used for the proper pathway of the sytem. System consist of 4 DC motors for the rotation of 4 wheels, L293D motor driver IC is an integrated circuit chip which is usually used to control motors in autonomous robots.As the vehicle moves in zig zag manner, the ultrasonic sensor detects any  obstacle present infront 
Then using web cam in real time , object detection(plastic bottle) takes place using machine learning via YOLO algorithm.When the plastic bottle is detected , a signal (HIGH) is sent from raspberry pi to Node MCU and the robotic arm picks up the detected bottle by moving at certain angles System also include a vacuum setup which works all the time for the collection of dirt which  is collected by  a dustbag  for later disposal. It also consists of a brush type setup powered by a dc motor to collect plastic covers,and other kind of wastes.


Connection :

Power supply – 12V 1A (AC adapter).

Buck converter ( DC to DC power converter ) steps down voltage from its input (supply) to its output (load).Works as a SMPS.

Steps down 12v into 5v.

Node MCU connected to 5v supply.

Motor  driver  and vacuum motor connected to 12v directly.

Web cam connected to raspberry pi via type A cable.

Raspberry pi connected to Node MCU  through RXDO and TXDO pin (GPIO14 and GPIO15).

Servomotors of Robotic arm ,Ultrasonic sensor connected to Node MCU. 




YOLO ALGORITHM

YOLO 

• YOLO is an algorithm that uses neural networks to provide real-time object detection. This algorithm is popular because of its speed and accuracy. It has been used in various applications to detect traffic signals, people, parking meters, and animals,and some specified objects Object detection is a phenomenon in computer vision that involves the detection of various objects in digital images or videos. Some of the objects detected include people, cars, chairs, stones, buildings, and animals.This phenomenon seeks to answer two basic questions:

1. What is the object? This question seeks to identify the object in a specific image.
  
2. Where is it? This question seeks to establish the exact location of the object within the image.
   
Object detection consists of various approaches such as fast R-CNN, Retina-Net, and Single-Shot MultiBox Detector (SSD). Although these approaches have solved the challenges of data limitation and modeling in object detection, they are not able to detect objects in a single algorithm run. YOLO algorithm has gained popularity because of its superior performance over the aforementioned object detection techniques.

• YOLO is an abbreviation for the term ‘You Only Look Once’. This is an algorithm that detects and recognizes various objects in a picture (in real-time). Object detection in YOLO is done as a regression problem and provides the class probabilities of the detected images.

• YOLO algorithm employs convolutional neural networks (CNN) to detect objects in real-time. As the name suggests, the algorithm requires only a single forward propagation through a neural network to detect objects



WORKING OF YOLO 

YOLO algorithm works using the following three techniques:

• Residual blocks

• Bounding box 

• Intersection Over Union (IOU)

• Non maximum suppression



RESIDUAL BLOCKS

First, the image is divided into various grids. Each grid has a dimension of S x S. The following image shows how an input image is divided into grids.

![image](https://github.com/user-attachments/assets/ee850066-e7ff-4624-b0d2-3b75d5765c23)

In the image above, there are many grid cells of equal dimension. Every grid cell will detect objects that appear within them. For example, if an object center appears within a certain grid cell, then this cell will be responsible for detecting it.


BOUNDING BOX 

A bounding box is an outline that highlights an object in an image.Every bounding box in the image consists of the following attributes 

       Width (bw)
       
       Height (bh)

  ![image](https://github.com/user-attachments/assets/dd858afd-f019-4d85-989b-bbcdc09a8f4e)

       


INTERSECTION OVER UNION (IOU)

• Intersection over union (IOU) is a phenomenon in object detection that describes how boxes overlap. YOLO uses IOU to provide an output box that surrounds the objects perfectly.

• Each grid cell is responsible for predicting the bounding boxes and their confidence scores. The IOU is equal to 1 if the predicted bounding box is the same as the real box. This mechanism eliminates bounding boxes that are not equal to the real box

![image](https://github.com/user-attachments/assets/2d489724-8a5b-445c-a7ed-78ee9150ac46)

In the image above, there are two bounding boxes, one in green and the other one in blue. The blue box is the predicted box while the green box is the real box. YOLO ensures that the two bounding boxes are equal.

IoU = Area of the intersection / Area of the union



NON MAXIMUM SUPRESION

Non-Max Suppression, One of the most common problems with object detection algorithms is that rather than detecting an object just once, they might detect it multiple times. Consider the below image.
Here, the cars are identified more than once. The Non-Max Suppression technique cleans up this up so that we get only a single detection per object

![image](https://github.com/user-attachments/assets/33dd6255-8fbb-4a90-85fd-9e9be88b6689)


CONCLUSION

The problem of waste management is a major issue. Manual collection of wastes is often complex and time consuming. Availability of labours is also a drastic challenge.Automation represents one of the major trends of the 20th century. The drive to provide increased levels of control to electro-mechanical systems, and with it a corresponding distancing of the human from direct system control, has grown out of the belief that automated systems provide superior reliability, improved performance and reduced costs for the performance of many functions.This project provides a solution to the above problem with the advancement of vacuum cleaning setup and the implementation of machine learning to detect and collect waste materials. This project has some limitations to work practically but with the furthermodification of the project provides a future asset for waste collection.


FUTURE SCOPE


Robotic vaccum cleaners focused on the technology and science impacts the cleaning sector and future of cleaning itself. Multinational coperations are currently releasing various robotic vaccum cleaners,that in honesty appear large,clumsy and slightly like mini spaceship .However the inovetion cannot be criticised as they have the potential to completely change the face of cleaning industry and our role with in it.
Our project automatic robovac is just a simple and small but a reliable and compact vaccum cleaner with some limitations. The cleaning robot functions with some delay during the process of object detection and pickup and the accuracy of functioning is less. With the advancement of the technology modification and improvement in the product is possible. Future intelligent devices may be able to learn ,think and act, with the inevitably of robotic humanbeing in our everyday lives.Smart cleaning technology is also changing the industry ,implementing new equipment to achieve the best clean and hygene. Accuracy may be strengthened ,labour productivity and safety standards raised















