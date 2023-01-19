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

int ch11;
int ch12;
int ch13;
int ch14;
int ch15;
int ch16;
int ch17;
int ch18;
int ch19;
int ch20;

unsigned long currentMillis;
long previousMillis = 0;    // set up timers
long interval = 20;        // time constant for timer


#include <IBusBM.h>

IBusBM IBus1; // IBus object
IBusBM IBus2; // IBus object


void setup() {
  Serial.begin(115200);   // remove comment from this line if you change the Serial port in the next line

  IBus1.begin(Serial3);    // iBUS connected to Serial1
  IBus2.begin(Serial1);    // iBUS connected to Serial2
}

void loop() {

    ch1 = IBus1.readChannel(0); // get latest value for servo channel 0
    ch2 = IBus1.readChannel(1); // get latest value for servo channel 1
    ch3 = IBus1.readChannel(2); // get latest value for servo channel 3
    ch4 = IBus1.readChannel(3); // get latest value for servo channel 4
    ch5 = IBus1.readChannel(4); // get latest value for servo channel 5
    ch6 = IBus1.readChannel(5); // get latest value for servo channel 6
    ch7 = IBus1.readChannel(6); // get latest value for servo channel 7
    ch8 = IBus1.readChannel(7); // get latest value for servo channel 8
    ch9 = IBus1.readChannel(8); // get latest value for servo channel 9
    ch10 = IBus1.readChannel(9); // get latest value for servo channel 10  

    ch11 = IBus2.readChannel(0); // get latest value for servo channel 0
    ch12 = IBus2.readChannel(1); // get latest value for servo channel 1
    ch13 = IBus2.readChannel(2); // get latest value for servo channel 3
    ch14 = IBus2.readChannel(3); // get latest value for servo channel 4
    ch15 = IBus2.readChannel(4); // get latest value for servo channel 5
    ch16 = IBus2.readChannel(5); // get latest value for servo channel 6
    ch17 = IBus2.readChannel(6); // get latest value for servo channel 7
    ch18 = IBus2.readChannel(7); // get latest value for servo channel 8
    ch19 = IBus2.readChannel(8); // get latest value for servo channel 9
    ch20 = IBus2.readChannel(9); // get latest value for servo channel 10

    currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {  // start timed event
  
        previousMillis = currentMillis;
        
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
        Serial.print("  *** ");
        Serial.print(ch11);
        Serial.print(" , ");
        Serial.print(ch12);
        Serial.print(" , ");
        Serial.print(ch13);
        Serial.print(" , ");
        Serial.print(ch14);
        Serial.print(" , ");
        Serial.print(ch15);
        Serial.print(" , ");
        Serial.print(ch16);
        Serial.print(" , ");
        Serial.print(ch17);
        Serial.print(" , ");
        Serial.print(ch18);
        Serial.print(" , ");
        Serial.print(ch19);
        Serial.print(" , ");
        Serial.print(ch20);
        
        Serial.println();

    }



 

}


