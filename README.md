# Turtlesim Game of Tag

![Turtlesim_Game_of_Tag](https://github.com/Kelvin4915/Turtlesim_Game_of_Tag/assets/134540002/d7bc8c3e-ed37-49e0-9b8f-3b2b9729ac7d)

## Overview

This project involves using the `turtlesim` package in ROS (Robot Operating System) to create a fun and interactive application. The application uses three nodes:

1. **turtlesim_node** from the `turtlesim` package.
2. **turtle_controller**: A custom node to control the turtle named "turtle1" which is part of the `turtlesim_node`.
3. **prey_turtles**: A custom node to spawn and manage turtles on the window, determining which turtles are still "alive" (on the screen).

The project can be organized into a new package named `turtlesim_catch`.

## Nodes

### prey_turtles Node

The `turtle_spawner` node performs the following functions:

- **Spawn Turtles**: Calls the `/spawn` service to create new turtles at random coordinates between 0.0 and 10.5 for both x and y axes.
- **Kill Turtles**: Calls the `/kill` service to remove turtles from the screen.
- **Publish Alive Turtles**: Publishes the list of currently alive turtles with their coordinates on the `/turtles_info` topic.
- **Handle Catch Service**: Provides a service to "catch" a turtle, which involves calling the `/kill` service and removing the turtle from the list of alive turtles.

### turtle_controller Node

The `turtle_controller` node performs the following functions:

- **Control Loop**: Runs a control loop using a high-rate timer to reach a target point. Controls the "boss" turtle, `turtle1`, by subscribing to `/turtle1/pose` and publishing to `/turtle1/cmd_vel`.
- **P Controller**: Implements a simplified Proportional (P) controller for the control loop.
- **Subscribe to Alive Turtles**: Subscribes to the `/turtles_info` topic to get the list of current turtles with coordinates and selects a target turtle to catch.
- **Kill Turtle**: Calls the `/kill_turtle` service provided by the `prey_turtles` node when a turtle has been caught by the master turtle.

## Custom Interfaces

The project includes custom message and service interfaces:

- **Turtleinfo.msg**: Defines the message structure for a turtle (name and coordinates).
- **Turtleinfoarray.msg**: Defines the message structure for an array of turtles, used for the `/turtles_info` topic.
- **TargetTurtle.srv**: Defines the service structure to send the name of the turtle that was caught. The client is the `turtle_controller` node, and the server is the `prey_turtles` node.

## Launch File for easy access

The project includes a launch file for easy deployment of all 3 nodes

![Turtlesim_Game_of_Tag](https://github.com/Kelvin4915/Turtlesim_Game_of_Tag/assets/134540002/28bf1db4-e07d-4698-b64b-ebe9fefcc133)


