//SDA:A4, SCL:A5
#include <Wire.h>
#include <Adafruit_MLX90614.h>
Adafruit_MLX90614 mlx = Adafruit_MLX90614();

double temp_obj; //pakai koma gunakan 'double'

void setup()
{
  Serial.begin(115200);
  //Initialize MLX90614
  mlx.begin();
}

void loop()
{
  //Reading room temperature and object temp
  temp_obj = mlx.readObjectTempC()*1.128; //*1.128 (UNTUK PENGALI KALIBRASI)

   //Serial Monitor
  Serial.println(temp_obj);
  delay(1000); //rubah delay disini 
}
