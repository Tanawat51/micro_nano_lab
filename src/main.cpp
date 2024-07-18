

//*****************************************
//** Turn LED On and Off With Push Button
//*****************************************
#include <Arduino.h>
#include<stdlib.h>
// int array[10] ={10,20,30,40,50,60,70,80,90,100};

void setup() {
  Serial.begin(9600);
  for (int i = 1;i <= 12;i++) {
    Serial.print("2 x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(2 * i);
  }
}
void loop() {
  //  Serial.println(array[5]);
}
