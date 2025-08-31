import time
import subprocess

def run_command_in_background(command):
    subprocess.Popen(command, shell=True, executable="/bin/bash")

# Terminal 1: Launch UR5 world
run_command_in_background("source install/setup.bash && ros2 launch ur5 ur5_world.launch.py")
time.sleep(3)  # Wait for UR5 world to load

# Terminal 2: Load the joint_state_broadcaster controller
run_command_in_background("source install/setup.bash && ros2 control load_controller --set-state active joint_state_broadcaster")

# Terminal 3: Load the joint_trajectory_controller controller
run_command_in_background("source install/setup.bash && ros2 control load_controller --set-state active joint_trajectory_controller")

# Terminal 4: Spawn the object
run_command_in_background(
    "source install/setup.bash && ros2 run ros2_conveyorbelt SpawnObject.py "
    "--package conveyorbelt_gazebo --urdf box.urdf --name box1 --x 0.1 --y 0.3 --z 0.76"
)
time.sleep(5)  # Wait for object to spawn

# Terminal 5: Run the conveyor belt
run_command_in_background(
    "source install/setup.bash && ros2 service call /CONVEYORPOWER "
    "conveyorbelt_msgs/srv/ConveyorBeltControl '{power: 10}'"
)
time.sleep(5)  # Let the conveyor belt run for 10 seconds

# Terminal 6: Stop the conveyor belt
run_command_in_background(
    "source install/setup.bash && ros2 service call /CONVEYORPOWER "
    "conveyorbelt_msgs/srv/ConveyorBeltControl '{power: 0}'"
)
time.sleep(5) 
# Terminal 7: Move the arm to the first position
run_command_in_background(
    "source install/setup.bash && ros2 run ur5 gz_ik "
    "--ros-args -p joint_angles:=[-0.2,0.2,-0.95,0.35,-1.57,0.0]"
)
time.sleep(5)

# Terminal 8: Turn on the gripper
run_command_in_background(
    "source install/setup.bash && ros2 service call /switch "
    "std_srvs/srv/SetBool '{data: true}'"
)
time.sleep(5)

# Terminal 9: Move the arm to the second position
run_command_in_background(
    "source install/setup.bash && ros2 run ur5 gz_ik "
    "--ros-args -p joint_angles:=[0.3,-0.3,1.5,0.1,1.57,0.0]"
)
time.sleep(5)

# Terminal 10: Turn off the gripper
run_command_in_background(
    "source install/setup.bash && ros2 service call /switch "
    "std_srvs/srv/SetBool '{data: false}'"
)



