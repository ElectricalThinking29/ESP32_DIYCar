/*** MY CHANNEL ***
If you can, please support me on my Youtube's channel:

    www.youtube.com/@TheElectricTHINK

by hitting like, share and subscribe's buttons to my videos.

*/

/*** LICENSE ***

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

*/

/*** DISCRIPTION ***
  This is the program for ESP32-DevKitC board. 
  The example sketch for ESP32 be able to connect to "Arduino Bluetooth Controller"_By_Giristudio.
  Link of the app on CH Play: https://play.google.com/store/apps/details?id=com.giristudio.hc05.bluetooth.arduino.control
*/

#include <Arduino.h>
#include "BluetoothSerial.h"

String device_name = "ESP32-DIYCar";

// Check if Bluetooth is available
#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
  #error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

// Check Serial Port Profile
#if !defined(CONFIG_BT_SPP_ENABLED)
  #error Serial Port Profile for Bluetooth is not available or not enabled. It is only available for the ESP32 chip.
#endif

BluetoothSerial SerialBT;

#define FORWARD 'F'
#define BACKWARD 'B'
#define LEFT 'L'
#define RIGHT 'R'
#define CIRCLE 'C'
#define CROSS 'X'
#define TRIANGLE 'T'
#define SQUARE 'S'
#define START 'A'
#define PAUSE 'P'
#define HOLD '0'

void executeCommand(char command);

void setup() {
  Serial.begin(115200);
  SerialBT.begin(device_name); //Bluetooth device name
  //SerialBT.deleteAllBondedDevices(); // Uncomment this to delete paired devices; Must be called after begin
  Serial.printf("The device with name \"%s\" is started.\nNow you can pair it with Bluetooth!\n", device_name.c_str());
}

void loop() {
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()) {
    Serial.write(SerialBT.read());
    char command = Serial.read();
    executeCommand(command);
  }
  delay(20);
}

void executeCommand(char command) {
  switch (command) {
    case FORWARD:
      // Perform action for moving forward
      break;
    case BACKWARD:
      // Perform action for moving backward
      break;
    case LEFT:
      // Perform action for turning left
      break;
    case RIGHT:
      // Perform action for turning right
      break;
    case CIRCLE:
      // Perform action for circle
      break;
    case CROSS:
      // Perform action for immediate stop or crossing
      break;
    case TRIANGLE:
      // Perform action for toggling a state (e.g., LED on/off)
      break;
    case SQUARE:
      // Perform action for retrieving and sending status information
      break;
    case START:
      // Perform action for starting a process or operation
      break;
    case PAUSE:
      // Perform action for pausing a process or operation
      break;
    case HOLD:
      // Perform action when release any button
      break;
    default:
      // Invalid command received
      break;
  }
}