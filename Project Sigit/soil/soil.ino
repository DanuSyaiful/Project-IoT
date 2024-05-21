#include <Wire.h> 

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  int i = analogRead(34);
  String msg = i < 2165 ? "WET" : i > 3135 ? "DRY" : "OK";
  float kelembabanTanah = (100 - ((i/1023.00)*100));
  Serial.print(i);
  Serial.println(msg);
  Serial.print(kelembabanTanah*(-1));
  Serial.println("%");
  delay(500); 
}
