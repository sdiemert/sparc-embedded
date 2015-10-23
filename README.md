# Clicker - Embedded

This directory houses code for a subcomponent of the [Clicker](https://github.com/sdiemert/clicker) project. The code here is intended to be run on an Arduino Nano that acts as an input device to detct "click" events. The arduino connects to the [Client](https://github.com/sdiemert/clicker/tree/master/client) component to upload its data. 

## Component Structure

Coming soon...

## Hardware

This code is meant to be run on an Arduino Nano and relies upon a hardware setup described in the `hardware` subdirectory of this project. Look there for circuit diagrams and wiring notes. 

## Development Notes

### Setup

This part of the project has been developing using the Arduino IDE and an external editor (JetBrains CLion). The `CMakeList.txt` does __not__ build the application. Use the Arduino IDE to compile and upload to an Arduino. 
