#include <Arduino.h>
#include <string>
#include <NumeralConverter.h>

/*
*********USAGE***********
std::string convert(<OUTPUT_TYPE>, <INPUT_VALUE>)

<OUTPUT_TYPE> : dec, hex, bin
<INPUT_VALUE> : must be a string i.e. "0F2E" (hex)

Return Type will be std::string

*/

void setup() {
  Serial.begin(115200);


  
  Serial.println(convert(dec, "0F2E"));


  Serial.println(convert(hex, "16380"));


  
}

void loop() {
  
}
