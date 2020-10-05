#include <Arduino.h>
#include <string>
#include <NumeralConverter.h>

/*
*********USAGE***********
std::string convert(<INPUT_TYPE>, <OUTPUT_TYPE>, <INPUT_VALUE>)

<INPUT_TYPE> : dec, hex, bin
<OUTPUT_TYPE> : dec, hex, bin
<INPUT_VALUE> : must be a string i.e. "0F2E" (hex)

Return Type will be std::string

*/

void setup() {
  Serial.begin(115200);

  Serial.println(convert(hex, dec, "0F2E"));

  Serial.println(convert(dec, hex, "16380"));


  
}

void loop() {
  
}
