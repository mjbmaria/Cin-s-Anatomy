#include <SparkFun_GridEYE_Arduino_Library.h>
#include <Wire.h>

GridEYE grideye;

void setup() {

  // inicializa a conexão I2C
  Wire.begin();
  // inicializa o sensor
  grideye.begin();
  Serial.begin(115200);

}

void loop() {

  Serial.print("Temperature in Celsius: ");
  Serial.println(grideye.getDeviceTemperature());

  Serial.println();

  delay(1000);
  
}
