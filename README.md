# ESP32_DIYCar
The example sketch for ESP32 connect to "Arduino Bluetooth Control" app via Bluetooth
- Made by ElectricThinking29
- Youtube: [@TheElectricTHINK](https://www.youtube.com/channel/UCbpYFgVtG8vMAZKuXPV0L8g)

# Description
+ This a example sketch for ESP32 connect to "Arduino Bluetooth Control" app via Bluetooth.
+ You can find the app [here](https://play.google.com/store/apps/details?id=com.giristudio.hc05.bluetooth.arduino.control)
+ In [ESP32_DIYCar](https://github.com/ElectricalThinking29/ESP32_DIYCar.git) you will see the [ESP32_Bluetooth_Gamepad_Example.cpp](ESP32_Bluetooth_Gamepad_Example.cpp) file, this is the code provided by the "Arduino Bluetooth Control" app.
+ But "Arduino Bluetooth Control" app's example code only work for Arduino board connect to an external Bluetooth module HC-05.
+ So I modify it so it can be use on ESP32 as well. Thus ESP32 have Bluetooth already.
+ If you use PlatformIO on Visual Studio Code as your IDE, you can see my configuration in [platformio.ini](platformio.ini)

# How to load a program to ESP32
1. Install Driver: If you use ESP32 DevKit V.1 then you have to install CH340C's Driver. You can find the instuction [here](https://learn.sparkfun.com/tutorials/how-to-install-ch340-drivers/all)
2. Install ESP32 library.
   + If you use Arduino IDE, you can find the instruction [here](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/)
   + If you use PlatformIO on VS Code (like me), then you may don't need to do anything thus it has already been installed.
3. Install the Bluetooth Serial Library: BluetoothSerial.h.
   + If you use Arduino IDE, you can find the instructions [here](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)
   + If you use PlatformIO on VS Code (like me), do these steps: Open "PIO Home" -> Libraries (On the Left) -> Type "BluetoothSerial" -> Choose "BluetoothSerial by Seeed" -> Click "Add to project" -> Choose your project you want to install the library -> then hit "Add"
4. Open main file, write the code, build/verify and load the program.

# References
I had used some knowledge form these guys:
1. [Arduino Bluetooth Controller_By_Giristudio](https://play.google.com/store/apps/details?id=com.giristudio.hc05.bluetooth.arduino.control)
2. [Bluetooth Serial Library_By_espressif](https://github.com/espressif/arduino-esp32/tree/master/libraries/BluetoothSerial)
3. [Installing the ESP32 Board in Arduino IDE (Windows, Mac OS X, Linux)_By_Random Nerd Tutorials](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/)
4. [Installing Libraries_By_Arduino](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)
5. [How to Install CH340 Drivers_By_Sparkfun](https://learn.sparkfun.com/tutorials/how-to-install-ch340-drivers/all)

# Youtube Channel
+ If you can, please support me on my Youtube's channel: [@TheElectricTHINK](https://www.youtube.com/channel/UCbpYFgVtG8vMAZKuXPV0L8g).

# Contact
+ E-mail: electricalthinking29@gmail.com

# License
Copyright 2023 @ElectricalThinking29

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
