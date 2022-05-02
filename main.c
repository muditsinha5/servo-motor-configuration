#include<Servo.h>
int servopin=9;
Servo A;
void setup() {
  A.attach(servopin);// put your setup code here, to run once:

}

void loop() {
  A.write(0);//rotate servo motor by 0 degrees
  delay(1000);
  A.write(90);//rotate servo motor by 90 degrees
  delay(1000);
  A.write(180);//rotate servo motor by 180 degrees
  delay(1000);// put your main code here, to run repeatedly:

}
