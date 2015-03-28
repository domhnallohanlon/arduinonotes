#include <Servo.h>



//pins
Servo hitec;

//program variables
int theta = 90; 	       //global var to store servo angle
int delta = 2; 	               // global var to store angular displacement

//waits
int whoa = 200;                // parameterising delay in ms


void setup (){
  Serial.begin(9600);
/********************************************
*   	      Syntax:		            *
*                                           *
*  attach(pin, min, max) ;                  *
*  pin the data connection for the Servo    *
*  min [optional]  smallest angle           *
*  max [optional]  largest angle            *
*                                           *
********************************************/

  hitec.attach(9);
}

void loop () {

//syntax from fade
if (theta >=180 || theta <=0){
  delta = -delta;
}


theta = theta + delta;
hitec.write(theta); 
Serial.print("Current angle is: ");
Serial.println(theta);
delay(whoa);
}
