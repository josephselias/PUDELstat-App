#include <SPI.h> 
#include <Wire.h> 
#include <EEPROM.h> 
#include <Servo.h> 
#include <LinxArduinoUno.h> 
#include <LinxSerialListener.h> 
LinxArduinoUno*LinxDevice; 
void setup(){ 
  LinxDevice = new LinxArduinoUno(); 
  LinxSerialConnection.Start(LinxDevice, 0); 
  TCCR1B =B00000001;  
  } 
  void loop() { 
    LinxSerialConnection.CheckForCommands();  
    }