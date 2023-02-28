const int enablepin1 = 9;
const int enablepin2 = 3;
const int s1a = 4;
const int s2a = 5;
const int s1b = 7;
const int s2b = 6;

void setup(){
  pinMode(enablepin1,OUTPUT);
  pinMode(enablepin2,OUTPUT);
  pinMode(s1a,OUTPUT);
  pinMode(s2a,OUTPUT);
  pinMode(s1b,OUTPUT);
  pinMode(s2b,OUTPUT);
  Serial.begin(9600);
}
void loop(){

  forward();
  delay(1000);
  stop();
  delay(1000);

  backward();
  delay(1000);
  stop();
  delay(1000);

  right();
  delay(500);
  stop();
  delay(1000);

  left();
  delay(500);
  stop();
  delay(1000);
}

void forward(){
  digitalWrite(enablepin1,HIGH);
  digitalWrite(enablepin2,HIGH);
  
  digitalWrite(s1a,HIGH);
  digitalWrite(s2a,LOW);
  digitalWrite(s1b,HIGH);
  digitalWrite(s2b,LOW);
  
}

void backward(){
  digitalWrite(enablepin1,HIGH);
  digitalWrite(enablepin2,HIGH);

  digitalWrite(s1a,LOW);
  digitalWrite(s2a,HIGH);
  digitalWrite(s1b,LOW);
  digitalWrite(s2b,HIGH);

}

void left(){
    digitalWrite(enablepin1,LOW);
  digitalWrite(enablepin2,HIGH);

  digitalWrite(s1a,LOW);
  digitalWrite(s2a,LOW);
  digitalWrite(s1b,HIGH);
  digitalWrite(s2b,LOW);
  
}

void right(){
    digitalWrite(enablepin1,HIGH);
  digitalWrite(enablepin2,LOW);

  digitalWrite(s1a,HIGH);
  digitalWrite(s2a,LOW);
  digitalWrite(s1b,LOW);
  digitalWrite(s2b,LOW);
}
void stop(){
    digitalWrite(enablepin1,LOW);
  digitalWrite(enablepin2,LOW);

  digitalWrite(s1a,LOW);
  digitalWrite(s2a,LOW);
  digitalWrite(s1b,LOW);
  digitalWrite(s2b,LOW);
}