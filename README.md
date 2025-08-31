# UR5 Autonomous Object Sorting with ROS2

An autonomous object sorting system using a UR5 manipulator, ArUco marker detection, and conveyor belt integration, built with ROS2 Humble and simulated in Gazebo AND RViz.

## Overview

This project demonstrates an autonomous pick-and-place robotic system that sorts objects based on ArUco markers. The system integrates a UR5 robotic manipulator with a conveyor belt, proximity sensor, and vision system to achieve reliable and accurate object sorting in a simulated environment.

## Key Features

- **Autonomous Object Detection**: ArUco marker-based identification for enhanced reliability  
- **Precise Manipulation**: UR5 6-DOF robotic arm with forward kinematics control  
- **Conveyor Integration**: Automated conveyor belt with proximity sensor control  
- **Vacuum Gripping**: Suction gripper for secure object handling  
- **ROS2 Architecture**: Distributed node communication using ROS2 Humble  
- **Gazebo Simulation**: Complete virtual environment for testing and validation  

## System Components

### Hardware (Simulated)
- UR5 Robotic Manipulator (6-DOF industrial robot arm)  
- Conveyor Belt with speed control  
- Proximity Sensor for object detection  
- Vision System with ArUco marker detection  
- Vacuum Gripper (suction-based end-effector)  

### Software Stack
- ROS2 Humble  
- Gazebo (11+)  
- OpenCV (for ArUco detection)  
- Conveyor Belt Plugins  

## Prerequisites

- Ubuntu 22.04 LTS  
- ROS2 Humble  
- Gazebo 11+  
- OpenCV 4.x  
- Python 3.8+

## Workflow in Terminal

Below are the key commands to run the UR5 Autonomous Object Sorting system step by step. Make sure to **source the workspace** first:

```bash
source ~/ur5_ws/install/setup.bash

# 1. Load Controllers
# Activate the required controllers for UR5 in ROS2 control
ros2 control load_controller --set-state active joint_state_broadcaster
ros2 control load_controller --set-state active joint_trajectory_controller

# 2. Pick-and-Place Controller

# Scan ArUco Marker: Move the arm to scanning position to detect objects
ros2 run ur5 gz_ik --ros-args -p joint_angles:=[-0.25,0.1,-0.9,0.4,-1.57,0.0]

# Move to Pick Position: Position the arm to pick the object
ros2 run ur5 gz_ik --ros-args -p joint_angles:=[-0.31,0.2,-0.93,0.4,-1.57,0.0]

# Activate Vacuum Gripper to pick the object
ros2 service call /switch std_srvs/srv/SetBool "{data: true}"

# 3. Place Objects in their respective bins for sorting

# Place Box 1
ros2 run ur5 gz_ik --ros-args -p joint_angles:=[0.3,-0.3,1.5,0.1,1.57,0.0]

# Place Box 2
ros2 run ur5 gz_ik --ros-args -p joint_angles:=[0.0,-0.7,1.0,0.1,1.6,0.0]

# Place Box 3
ros2 run ur5 gz_ik --ros-args -p joint_angles:=[-0.6,-0.7,1.0,0.1,1.6,0.0]

# Place Box 4
ros2 run ur5 gz_ik --ros-args -p joint_angles:=[-0.45,-1.0,0.5,0.3,1.6,0.0]

# 4. Conveyor Belt Control

# Spawn Box at Start Position
ros2 run ros2_conveyorbelt SpawnObject.py --package "conveyorbelt_gazebo" --urdf "box.urdf" --name "box10" --x 0.1 --y 0.3 --z 0.76

# Spawn Box at Stop Position
ros2 run ros2_conveyorbelt SpawnObject.py --package "conveyorbelt_gazebo" --urdf "box.urdf" --name "box11" --x 0.55 --y 0.3 --z 0.76

# Control Conveyor Belt Speed (power 0-100)
ros2 service call /CONVEYORPOWER conveyorbelt_msgs/srv/ConveyorBeltControl "{power: 10}"

