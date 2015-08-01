//  Line_Follower_Display_Tripod_150725

#define SIZE 14
#include <Servo.h>
Servo myservoA; 
Servo myservoB;  
Servo myservoC;
int i = 0;
int STOP = 15;
int ledPins[SIZE] = {0,31,32,33,34,35,36,37,38,39,40,41,42,43};

void setup() {
  Serial.begin(9600);
  myservoA.attach(22);
  myservoA.write(90);
  myservoB.attach(23);
  myservoB.write(90);
  myservoC.attach(24);
  myservoC.write(90);
  delay(5000);
  
  for (int i = 1; i < SIZE; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = 1; i < 4; i++) {
    digitalWrite(ledPins[1], HIGH);
    delay (200);
    digitalWrite(ledPins[1], LOW);
    delay (200);
  }
  delay(5000); 
}
//---------------------------------end of Void Setup----------------------------------

void loop () {
  //
  // Move inside direction
  //
  Direction(10);
  delay(10000);
  Direction(15);
  digitalWrite(ledPins[1], LOW);
  delay(10000);
//Direction(7);
 // delay(5000);
 // Direction(15);
 // digitalWrite(ledPins[7], LOW);
}
//---------------------------------end of void loop----------------------------------

    
void Direction (int x) {
  switch (x) {
  case 1:
    digitalWrite(ledPins[1], HIGH);
    myservoA.write(82.98);     
    myservoB.write(97);
    myservoC.write(90);
    break;
    
  case 2:
    digitalWrite(ledPins[2], HIGH);
    myservoA.write(87);     
    myservoB.write(97);
    myservoC.write(86.6);
    break;
  
  case 3:
    digitalWrite(ledPins[3], HIGH);
    myservoA.write(90);     
    myservoB.write(97);
    myservoC.write(83.2);
    break;
  
  case 4:
    digitalWrite(ledPins[4], HIGH);
    myservoA.write(93.4);     
    myservoB.write(93.7);
    myservoC.write(83.2);
    break;
  
  case 5:
    digitalWrite(ledPins[5], HIGH);
    myservoA.write(97.02);     
    myservoB.write(90);
    myservoC.write(83.2);
    break;
  
  case 6:
    digitalWrite(ledPins[6], HIGH);
    myservoA.write(97.02);     
    myservoB.write(87.2);
    myservoC.write(87.2);
    break;
  
  case 7:
    digitalWrite(ledPins[7], HIGH);
    myservoA.write(97.02);     
    myservoB.write(83);
    myservoC.write(90);
    break;
  
  case 8:
    digitalWrite(ledPins[8], HIGH);
    myservoA.write(93);     
    myservoB.write(83);
    myservoC.write(93.4);
    break;
  
  case 9:
    digitalWrite(ledPins[9], HIGH);
    myservoA.write(90);     
    myservoB.write(83);
    myservoC.write(96.8);
    break; 
  
  case 10:
    digitalWrite(ledPins[10], HIGH);
    myservoA.write(87);     
    myservoB.write(86.9);
    myservoC.write(97.2);
    break; 
  
  case 11:
    digitalWrite(ledPins[11], HIGH);
    myservoA.write(82.98);     
    myservoB.write(90);
    myservoC.write(96.8);
    break;
  
  case 12:
    digitalWrite(ledPins[12], HIGH);
    myservoA.write(82.98);     
    myservoB.write(93.5);
    myservoC.write(93.5);
    break;
    
  case 15:
    myservoA.write(90);     
    myservoB.write(90);
    myservoC.write(90);
    break;
 
  default:
    Serial.println ("No Case Found In Direction");
  }
} 

//---------------------------------end of Direction----------------------------------


