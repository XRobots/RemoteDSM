int ch1;
int ch2;
int ch3;
int ch4;
int ch5;
int ch6;
int ch7;
int ch8;
int ch9;
int ch10;

#include <IBusBM.h>
IBusBM IBus; // IBus object


void setup() {
  Serial.begin(115200);   // remove comment from this line if you change the Serial port in the next line
  IBus.begin(Serial3);    // change to Serial1 or Serial2 port when required
}

void loop() {

    ch1 = IBus.readChannel(0); // get latest value for servo channel 0
    ch2 = IBus.readChannel(1); // get latest value for servo channel 1
    ch3 = IBus.readChannel(2); // get latest value for servo channel 3
    ch4 = IBus.readChannel(3); // get latest value for servo channel 4
    ch5 = IBus.readChannel(4); // get latest value for servo channel 5
    ch6 = IBus.readChannel(5); // get latest value for servo channel 6
    ch7 = IBus.readChannel(6); // get latest value for servo channel 7
    ch8 = IBus.readChannel(7); // get latest value for servo channel 8
    ch9 = IBus.readChannel(8); // get latest value for servo channel 9
    ch10 = IBus.readChannel(9); // get latest value for servo channel 10
  
    Serial.print(ch1);
    Serial.print(" , ");
    Serial.print(ch2);
    Serial.print(" , ");
    Serial.print(ch3);
    Serial.print(" , ");
    Serial.print(ch4);
    Serial.print(" , ");
    Serial.print(ch5);
    Serial.print(" , ");
    Serial.print(ch6);
    Serial.print(" , ");
    Serial.print(ch7);
    Serial.print(" , ");
    Serial.print(ch8);
    Serial.print(" , ");
    Serial.print(ch9);
    Serial.print(" , ");
    Serial.print(ch10);
    
    Serial.println();

 
  delay(10);
}


