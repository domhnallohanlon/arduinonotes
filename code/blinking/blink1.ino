
/******************************************
* there are two sections in every Arduino sketch,
* setup() and loop()
**********************************************/

void setup(){
	pinMode(13, OUTPUT);
}

void loop(){

	digitalWrite(13, HIGH);
	delay(1000);
	digitalWrite(13, LOW);
	delay(500);
}
