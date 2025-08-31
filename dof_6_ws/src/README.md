__MAIN REQUIREMENT to execute the plugin: <plugin> tag in MODEL__

The following tag must be added to the .sdf or .urdf file of the ConveyorBelt model:

```sh
<gazebo>
    <plugin filename="libROS2ConveyorBeltPlugin.so" name="ros2_conveyorbelt_plugin">
        <ros>
            <namespace></namespace>
        </ros>
        <max_velocity>0.2</max_velocity>
        <publish_rate>10</publish_rate>
    </plugin>
</gazebo>
```

The max_velocity and publish_rate parameters can be manually modified, but it is recommended to leave them with these pre-defined values for optimal performance.

__EXAMPLE: Simple cube in ConveyorBelt__

The following steps must be followed in order to execute and simulate a simple box on top of the ConveyorBelt (as shown in the [video](https://www.youtube.com/watch?v=8Ciuf99ukMs) above):

1. Launch the ConveyorBelt Gazebo environment:

    ```sh
    ros2 launch conveyorbelt_gazebo conveyorbelt.launch.py
    ```

2. Spawn the box on top of the Belt:

    ```sh
    ros2 run ros2_conveyorbelt SpawnObject.py --package "conveyorbelt_gazebo" --urdf "box.urdf" --name "box" --x 0.0 --y -0.0 --z 0.76
    ```

3. Activate the ConveyorBelt with the desired speed -> Value = (0,100]:

    ```sh
    ros2 service call /CONVEYORPOWER conveyorbelt_msgs/srv/ConveyorBeltControl "{power: --}"
    ```


<br />

