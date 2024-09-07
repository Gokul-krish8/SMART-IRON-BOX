#include <ESP32Servo.h>

int ir_sensor = 14;
int relay = 12;
int originalPosition1 = 0; 
int originalPosition2 = 0;

Servo servo1;
Servo servo2;

void setup() {
  pinMode(ir_sensor, INPUT);  
  pinMode(relay, OUTPUT);   
  servo1.attach(13);        
  servo2.attach(18);        
  Serial.begin(9600);        
}

void loop() {
  int VAL = digitalRead(ir_sensor);

  if (VAL == 0) {
    digitalWrite(relay, HIGH);   
    Serial.println("IR Sensor Output LOW - Move Servos to 90 degrees");

    servo1.write(90);           
    servo2.write(90);
    delay(1000);                 
  } else {
    digitalWrite(relay, LOW);  
    Serial.println("IR Sensor Output HIGH - Servos Return to Original Position");

    servo1.write(originalPosition1);
    servo2.write(originalPosition2);
    delay(1000);                
  }
}
