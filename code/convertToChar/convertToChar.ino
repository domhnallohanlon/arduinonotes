

int numPressed = 0;

void setup(){
 Serial.begin(9600); 
}

void loop(){
 if(Serial.available() > 0){
  numPressed = Serial.read();
  
  Serial.write(numPressed);
  Serial.println('\n');
  Serial.println(numPressed);
 } 
  
}
