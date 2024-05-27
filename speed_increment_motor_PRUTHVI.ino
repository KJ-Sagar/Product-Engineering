
int motor=5;
int speed=0;
int speedamt=5;

void setup()
{
  pinMode(3, OUTPUT);
}

void loop() 
{
  analogWrite(3,speed);
  delay(50000);
  speed = speed+speedamt;
 if (speed<=255)
 {analogWrite(3,speed);}
else{ 
  analogWrite(3,speed);
 }
}
