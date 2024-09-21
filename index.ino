#include <Thermistor.h>

Thermistor temp(4);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int temperature = temp.getTemp();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("ºC");
  delay(1000);
}
