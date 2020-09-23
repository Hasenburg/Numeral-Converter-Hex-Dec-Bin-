#include <Arduino.h>
#include <string>
#include <NumeralConverter.h>

std::string stringToConvert = "0F2E"; // The String Input, thats supposed to be converted


void setup() {
  Serial.begin(115200);
  print(convert(hex, stringToConvert));
}

void loop() {
  
}
