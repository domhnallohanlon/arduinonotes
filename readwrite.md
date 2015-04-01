# Reading and Writing

## Digital

These functions are use to get information from, and send information to, the digital pins.

```
digitalRead();
digitalWrite();
```
## Analog

```

analogRead();
analogWrite();

```


## Serial

Rather than being functions by themselves, the following are functions that are made available through the Serial library.
When printing data standard escape characters (create table) are supported, however the full functionalities of a function like `printf()` and `scanf()` in the C language are not available in Arduino.

```
Serial.begin();

Serial.available();

Serial.read();

Serial.write();

Serial.print();

Serial.println();


```

## Chasing Chars

Typically converting between typed characters (Latin, Cyrillic, Arabic etc.) is handled by something like an ASCII table, or some extended version. [add some background] 

The following gist gives an example of this. It stores the input as an integer and then displays it either as the keyboard character we just pressed or its underlying ASCII value:

<code data-gist-id="0cf6a5f5290b12aa42bf"></code>
<a href="https://gist.github.com/domhnallohanlon/0cf6a5f5290b12aa42bf/download" class="text-success pull-right">Download Code</a><br>

For you convenience I've also prepared a searchable table with 128 different characters and their corresponding numeric values.

<a href="http://domhnallohanlon.github.io/cnotes/table.html" target="_blank">Searchable ASCII Table</a>

## Traffic Lights Revisited

In this example, the Arduino accepts values through the serial monitor and changes the state of the LEDs accordingly.

<code data-gist-id="99d31aa3d1b0ac8d85b0"></code>
<a href="https://gist.github.com/domhnallohanlon/99d31aa3d1b0ac8d85b0/download" class="text-success pull-right">Download Code</a><br>
