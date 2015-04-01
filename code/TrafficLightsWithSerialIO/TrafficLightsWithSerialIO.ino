/*
Traffic light code where the user selects which LED to illuminate based on key press

Code by Domhnall O'Hanlon. 2014.

*/

//giving the pins more suitable names
//this will make the code easier to read, 
//and changes faster to carry out
int GreenLED = 11;  //pin 1 = TX
int YellowLED = 10; //pin 0 = RX
int RedLED = 9;

//same idea with as with the pins
//changing the delay requires making one change rather than 3!
int multiplier = 100;
int interval = 2;
int delayAmount = interval * multiplier;

int keyPressed = 0;
int numBlinks = 3;

void setup(){
 Serial.begin(9600); 
  
 pinMode(GreenLED, OUTPUT);
 pinMode(YellowLED, OUTPUT);
 pinMode(RedLED, OUTPUT);

Serial.println("Please press \'r\' for Red, \'y\' for Yellow or \'g\' for Green."); 

}


void loop(){
  //only executes this code if something is sent from the serial monitor
  if(Serial.available() >0){
    
    //sets the keyPressed var to whatever the user has typed on their keyboard
    keyPressed = Serial.read(); 
    
    //checks for either lower or upper case and sets the lights accordingly.
    // || is used to denote the boolean operator, 'OR'
    // && is used for the 'AND' operator
    // single quites are used for chars and double quotes are used for Strings
    // NB: == denotes equivalence and = is used for assignment.
    if(keyPressed =='r' || keyPressed == 'R'){
     Serial.write(keyPressed); 
     digitalWrite(RedLED, HIGH);
     digitalWrite(YellowLED, LOW);
     digitalWrite(GreenLED,LOW);
    }
    
    else if(keyPressed =='y'||keyPressed == 'Y'){
     Serial.write(keyPressed); 
     digitalWrite(RedLED, LOW);
     digitalWrite(YellowLED, HIGH);
     digitalWrite(GreenLED,LOW);
    }
    
    else if(keyPressed =='g' || keyPressed == 'G'){
     Serial.write(keyPressed); 
     digitalWrite(RedLED, LOW);
     digitalWrite(YellowLED, LOW);
     digitalWrite(GreenLED, HIGH);
    }
    
    /*
    Again, not strictly necessary here, but it's always good practice use an else block to 
    look after all the other eventualities.
    In this piece of code ALL the LEDs blink repeatedly if an invalid key is pressed.
    numBlinks and delayAmount are global variables, defined at the very beginning of the code
    */
    else{
     int i=1;
     while (i<=numBlinks){
       digitalWrite(RedLED, HIGH);
       digitalWrite(YellowLED, HIGH);     
       digitalWrite(GreenLED,HIGH); 
       delay(delayAmount);
       digitalWrite(RedLED, LOW);
       digitalWrite(YellowLED, LOW);     
       digitalWrite(GreenLED,LOW);
       delay(delayAmount);
       //Serial.print(i); //I was using this while debugging.
   
       i++;
     }
         Serial.write(keyPressed);
    }
  }

}

