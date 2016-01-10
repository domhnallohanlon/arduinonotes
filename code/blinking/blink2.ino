
/******************************************
* Let's blink an LED on  pin 12 instead. 
* A small change in the circuit can result in big changes in the code
* It is good practice to create global varibales for these connections

**********************************************/

const int LED = 12;


void setup(){
	pinMode(LED, OUTPUT);
}

void loop(){

	digitalWrite(LED, HIGH);
	delay(1000);
	digitalWrite(LED, LOW);
	delay(500);
}
