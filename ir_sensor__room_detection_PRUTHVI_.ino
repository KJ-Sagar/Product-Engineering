int count=0;
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(3, INPUT);
}

void loop()

{
int IRread = digitalRead(3);
IRread==1;
count++;
 if(count % 2==1)
 { 
 digitalWrite(12, HIGH);
 delay(1000);
 }
