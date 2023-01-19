# TMRC
Title: Remote Control of a Two-Motor Robot using TCP Protocol

Objective: The goal of this project is to design and implement a system that allows for remote control of a Two-Motor Robot using the Transmission Control Protocol (TCP) at the application layer. The robot will be controlled via commands sent from a server to an Arduino Nano V3.0 microcontroller, which will be connected to the robot's motors and an ESP-12 WiFi module.

Methodology:
 1) Design and implement a Python script on the server side that listens for command inputs from the user and sends corresponding two-bit commands to the Arduino via the ESP-12 WiFi module.
 2) Design and implement an Arduino script that runs on the Arduino Nano V3.0 and controls the robot's motors based on the received commands.
 3) Test the system by sending various commands from the server and observing the corresponding movements of the robot.

Expected Outcome:
A functional system that allows for remote control of a two-motor robot using TCP protocol. The system will be able to receive commands from the server and translate them into actions on the robot, allowing for movement in four different directions (forward, backward, right, and left).
Deliverables:
 • Python script for the server side
 • Arduino script for the Arduino Nano V3.0
