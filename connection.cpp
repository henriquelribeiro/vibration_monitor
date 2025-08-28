#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

void loop() {
    while(mpu.getAccelerometerSensor()) {
        if(true) {
            mpu.getEvent();            
        }
        return;
    }
}
void motion_sensor() {
    mpu.getEvent(&a, &temp);

    std::cout << "x " a.acceleration.x << endl;
    std::cout << "y " a.acceleration.y << endl;
    std::cout << "temperature: " << temp << endl;
}