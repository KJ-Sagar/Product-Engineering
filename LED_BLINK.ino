int IR=5;
void setup()
 {
  //pinMode(5,INPUT);

  pinMode (11,OUTPUT);
  pinMode(IR,INPUT);
    
  }
void loop() 
{
 int IR = digitalRead(4);
 if( IR == 0)
 {
 digitalWrite(11 , LOW);}
 else{
 digitalWrite(11 , HIGH);}
 }