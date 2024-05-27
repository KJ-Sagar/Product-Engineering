const int motorpin1=8;
const int motorpin2=9;
void setup(){
  pinMode(motorpin1 ,OUTPUT);
  pinMode(motorpin2,OUTPUT);
}

void loop(){
  digitalWrite(motorpin1,HIGH);
  digitalWrite(motorpin2,LOW);
  delay(3000);
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,HIGH);
  delay(3000);
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);
}
