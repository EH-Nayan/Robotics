#include<Servo.h>
Servo myservo_1;
Servo myservo_2;
Servo myservo_3;
Servo myservo_4;
Servo myservo_5;
int pos=0;

void setup() {
myservo_1.attach(9);
myservo_2.attach(10);
myservo_3.attach(11);
myservo_4.attach(12);
myservo_5.attach(13);

}

void loop() {
  for(pos=0;pos<=180;pos++){
  myservo_1.write(pos);
  delay(10);
  }
  delay(1000);
  for(pos=180;pos>=0;pos--){
    myservo_1.write(pos);
    delay(10);
  }
    
     for(pos=0;pos<=180;pos++){
  myservo_2.write(pos);
  delay(10);
  }
  delay(1000);
  for(pos=180;pos>=0;pos--){
    myservo_2.write(pos);
    delay(10);
  }
    
     for(pos=0;pos<=180;pos++){
  myservo_3.write(pos);
  delay(10);
  }
  delay(1000);
  for(pos=180;pos>=0;pos--){
    myservo_3.write(pos);
    delay(10);
  }
    
     for(pos=0;pos<=180;pos++){
  myservo_4.write(pos);
  delay(10);
  }
  delay(1000);
  for(pos=180;pos>=0;pos--){
    myservo_4.write(pos);
    delay(10);
  }
    
     for(pos=0;pos<=180;pos++){
  myservo_5.write(pos);
  delay(10);
  }
  delay(1000);
  for(pos=180;pos>=0;pos--){
    myservo_5.write(pos);
    delay(10);
  }
    
}
