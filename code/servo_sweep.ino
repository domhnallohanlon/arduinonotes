#include Servo.h



//pins
static int hitec = 9;

//program variables
int theta; 			//global var to store servo angle
int delta = 2; 	// local var to store angular displacement... Make global!!

//waits
int whoa = 200; // parameterising delay in ms


void setup (){

/********************************************
*   								Syntax:									*
*  																					*
*  attach(pin, min, max) ;									*
*  pin the data connection for the Servo 		*
*  min [optional]  smallest angle						*
*  max [optional]  largest angle 						*
* 																					*
********************************************/

  Servo.attach(hitec);
}

void loop () {

//syntax from fade
if (theta >=180 || theta <=0){
  delta = -delta;
}


int position = delta+theta;
hitec.write(position); 

delay(whoa);
}
