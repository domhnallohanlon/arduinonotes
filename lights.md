<!-- Latest compiled and minified CSS & JS -->
<link rel="stylesheet" media="screen" href="https://netdna.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">



# Lecture 1: Let There Be Lights

![Arduino Uno](img/uno.svg "Arduino Uno")

## Plan of Action

 - Origin and History of Arduino
 - Getting Acquainted with the IDE
 - "Hello World" sketch
 - Traffic Lights

## Development of the Arduino

Born in an Italian design school, the Arduino was always going to be beatuiful. The distinctive microcontroller has won admirers all over the world particularly for its ease of programming. Since 2009? the Uno and a wide variety clones/

## Arduino Philosophy
Much of the Arduino's success is attributable to the open source nature of the project. It is possible to modify both the source code of the Arduino software as well as build your own Arduino in fact it's technically possible to build an imitation Arduino for under €5 in parts. This open philosophy has led to a huge community of users, hackers and makers springing up and supporting the platform.

## The Arduino IDE

An IDE, or __i__ntegrated __d__evelopment __e__nvironment, is used to write human readable software, compile it into machine readable code and produce illegible debug messages that will have you tearing your hair out in no time. The Arduino IDE is based on Processing, an open source project developed by ?, and is currently in version 1.6. 
The icons on the top of the editor perform the following functions:

<img src="img/tb1.png" class="img-responsive" alt="Toolbar">
__Verify__ and __Upload__: Verify simply checks that the code is syntactically correct and suitable for uploading. The upload button verifies the code and then uploads it to the connected board.

<img src="img/tb2.png" class="img-responsive" alt="Toolbar">
__New, Open__ and __Save__ as the the names imply are for creating new sketches, opening existing sketches and saving the current sketch. 

<img src="img/tb3.png" class="img-responsive" alt="Toolbar">
On the top right of the editor is the __Open Serial Monitor__ button. It allows you to send and recieve serial data between your computer and the Arduino.

## Anatomy of a Sketch

```
void setup(){
    
}
```

```
void loop(){
    
}
```

## Hello Ardunio World

blinking

## Semapore

looping

### Parameterising

int LED = 13;

### Pinteresting

Voltage and current from an Arduino pin

## Resistors

### Ohm's Law

## Traffic Lights

<object data="img/trafficLights_plus.svg" type="image/svg+xml"></object>
### Code
<code data-gist-id="25f0bfed4db45384c3f6"></code>
<a href="https://gist.github.com/domhnallohanlon/25f0bfed4db45384c3f6/download" class="text-success pull-right">Download Code</a><br>



### Video

[](https://www.youtube.com/watch?v=uR0I9r7ffKc)


### Stretch Goal
 - Initialise the LEDs using an array
 - Toggle lights based on keyboard input

## Where to?

<a href="https://domhnallohanlon.github.io" class="btn btn-primary"> Domhnall's Projects</a>  <a href="https://domhnallohanlon.github.io/arduinonotes" class="btn btn-success"> Arduino Resources</a>

