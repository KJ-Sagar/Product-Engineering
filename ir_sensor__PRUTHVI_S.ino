
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(3, INPUT);
}

void loop()

{
  int IRread = digitalRead(3);
  if (IRread==1)
  {
    digitalWrite(12,HIGH);
  }
 else{ 
  digitalWrite(12,LOW);
 }
}
