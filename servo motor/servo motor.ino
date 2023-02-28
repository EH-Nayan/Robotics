#include<Servo.h>
Servo myservo;
int pos=0;

void setup() {
myservo.attach(9);
  

}

void loop() {
  for(pos=0;pos<=90;pos++){
  myservo.write(pos);
  delay(10);
  }
  delay(1000);
  for(pos=90;pos>=0;pos--){
    myservo.write(pos);
    delay(10);
  }
    
}
