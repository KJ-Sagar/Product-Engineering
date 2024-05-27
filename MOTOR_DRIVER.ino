//Motor B
const int motorPin3  = 2; // Pin  7 of L293
const int motorPin4  = 3;  // Pin  2 of L293
 
//This will run only one time.
void setup(){
 
    //Set pins as outputs
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);

    //This code will turn Motor B clockwise for 2 sec.
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(30000); 
    //This code will turn Motor B counter-clockwise for 2 sec.
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    delay(30000);    
    
    //And this code will stop motors
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
  
}


void loop(){
  

}
