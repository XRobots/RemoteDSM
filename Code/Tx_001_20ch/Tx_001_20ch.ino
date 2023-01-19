// sends ten x2 channels of PPM with two transmitters

int ch1 = 1500;       // initial values
int ch2 = 1550;
int ch3 = 1500;
int ch4 = 1500;
int ch5 = 1500;
int ch6 = 1500;
int ch7 = 1500;
int ch8 = 1500;
int ch9 = 1500;
int ch10 = 1500;
int ch11 = 1500;
int ch12 = 1500;

int sw1;
int sw2;
int sw3;
int sw4;
int sw5;
int sw6;
int sw7;
int sw8;

int swCombo1 = 1500;
int swCombo2 = 1500;
int swCombo3 = 1500;
int swCombo4 = 1500;

void setup() {
  pinMode(38, INPUT_PULLUP);    // digital switches
  pinMode(40, INPUT_PULLUP);
  pinMode(42, INPUT_PULLUP);
  pinMode(44, INPUT_PULLUP);
  pinMode(46, INPUT_PULLUP);
  pinMode(48, INPUT_PULLUP);
  pinMode(50, INPUT_PULLUP);
  pinMode(52, INPUT_PULLUP);
  
  pinMode(9, OUTPUT);       // PPM output pin - first 10
  pinMode(10, OUTPUT);      // PPM output pin - second 10
  
  Serial.begin(115200);     // debug
}
  

void loop() {

  ch1 = analogRead(A0);          // read analog sticks
  ch1 = map(ch1, 0,1023,1000,2000);
  ch2 = analogRead(A1);
  ch2 = map(ch2, 0,1023,1000,2000);
  ch3 = analogRead(A2);
  ch3 = map(ch3, 0,1023,1000,2000);
  ch4 = analogRead(A3);
  ch4 = map(ch4, 0,1023,1000,2000);
  ch5 = analogRead(A4);
  ch5 = map(ch5, 0,1023,1000,2000);
  ch6 = analogRead(A5);
  ch6 = map(ch6, 0,1023,1000,2000);
  ch7 = analogRead(A6);
  ch7 = map(ch7, 0,1023,1000,2000);
  ch8 = analogRead(A7);
  ch8 = map(ch8, 0,1023,1000,2000);
  ch9 = analogRead(A8);
  ch9 = map(ch9, 0,1023,1000,2000);
  ch10 = analogRead(A9);
  ch10 = map(ch10, 0,1023,1000,2000);
  ch11 = analogRead(A10);
  ch11 = map(ch11, 0,1023,1000,2000);
  ch12 = analogRead(A11);
  ch12 = map(ch12, 0,1023,1000,2000);

  sw1 = digitalRead(38);
  sw2 = digitalRead(40);
  sw3 = digitalRead(44);
  sw4 = digitalRead(42);
  sw5 = digitalRead(46);
  sw6 = digitalRead(50);
  sw7 = digitalRead(48);
  sw8 = digitalRead(52);

   
  // sw channel 1   
  if (sw1 == 1 && sw2 == 1) {
    swCombo1 = 1100;
  }
  else if (sw1 == 0 && sw2 == 1) {
    swCombo1 = 1400;
  }
  else if (sw1 == 1 && sw2 == 0) {
    swCombo1 = 1700;
  }
  else if (sw1 == 0 && sw2 == 0) {
    swCombo1 = 2000;
  }
  
  // sw channel 2
  if (sw3 == 1 && sw4 == 1) {
    swCombo2 = 1100;
  }
  else if (sw3 == 0 && sw4 == 1) {
    swCombo2 = 1400;
  }
  else if (sw3 == 1 && sw4 == 0) {
    swCombo2 = 1700;
  }
  else if (sw3 == 0 && sw4 == 0) {
    swCombo2 = 2000;
  }
  
  // sw channel 3
  if (sw5 == 1 && sw6 == 1) {
    swCombo3 = 1100;
  }
  else if (sw5 == 0 && sw6 == 1) {
    swCombo3 = 1400;
  }
  else if (sw5 == 1 && sw6 == 0) {
    swCombo3 = 1700;
  }
  else if (sw5 == 0 && sw6 == 0) {
    swCombo3 = 2000;
  }
  
  // sw channel 4
  if (sw7 == 1 && sw8 == 1) {
    swCombo4 = 1100;
  }
  else if (sw7 == 0 && sw8 == 1) {
    swCombo4 = 1400;
  }
  else if (sw7 == 1 && sw8 == 0) {
    swCombo4 = 1700;
  }
  else if (sw7 == 0 && sw8 == 0) {
    swCombo4 = 2000;
  }
  

  // first octave

  digitalWrite(9, HIGH);
  delayMicroseconds(500);         // ch1
  digitalWrite(9, LOW);
  delayMicroseconds(ch1-500);     // gap for the remaining period
  
  digitalWrite(9, HIGH);              
  delayMicroseconds(500);         // ch2
  digitalWrite(9, LOW);     
  delayMicroseconds(ch2-500);   
  
  digitalWrite(9, HIGH);        
  delayMicroseconds(500);         // ch3
  digitalWrite(9, LOW);      
  delayMicroseconds(ch5-500);   

  digitalWrite(9, HIGH);
  delayMicroseconds(500);         // ch4 
  digitalWrite(9, LOW);      
  delayMicroseconds(ch6-500);   

  digitalWrite(9, HIGH);        
  delayMicroseconds(500);         // ch5
  digitalWrite(9, LOW);        
  delayMicroseconds(ch9-500);   

  digitalWrite(9, HIGH);          // ch6 
  delayMicroseconds(500);
  digitalWrite(9, LOW);      
  delayMicroseconds(ch10-500);

  digitalWrite(9, HIGH);          // ch7 
  delayMicroseconds(500);
  digitalWrite(9, LOW);      
  delayMicroseconds(swCombo1-500);

  digitalWrite(9, HIGH);          // ch8 
  delayMicroseconds(500);
  digitalWrite(9, LOW);      
  delayMicroseconds(swCombo2-500);

  digitalWrite(9, HIGH);          // ch9 
  delayMicroseconds(500);
  digitalWrite(9, LOW);      
  delayMicroseconds(swCombo3-500);

  digitalWrite(9, HIGH);          // ch10 
  delayMicroseconds(500);
  digitalWrite(9, LOW);      
  delayMicroseconds(swCombo4-500);     

  digitalWrite(9, HIGH);          // sync pulse
  delayMicroseconds(500);
  digitalWrite(9, LOW);
  delayMicroseconds(10000);        // longer gap


  // second octave

  digitalWrite(10, HIGH);
  delayMicroseconds(500);           // ch1
  digitalWrite(10, LOW);
  delayMicroseconds(ch3-500);       // gap for the remaining period
  
  digitalWrite(10, HIGH);        
  delayMicroseconds(500);           // ch2
  digitalWrite(10, LOW);     
  delayMicroseconds(ch4-500);   
  
  digitalWrite(10, HIGH);           
  delayMicroseconds(500);           // ch3
  digitalWrite(10, LOW);      
  delayMicroseconds(ch7-500);   

  digitalWrite(10, HIGH);
  delayMicroseconds(500);           // ch3
  digitalWrite(10, LOW);      
  delayMicroseconds(ch8-500);   

  digitalWrite(10, HIGH);        
  delayMicroseconds(500);           // ch4
  digitalWrite(10, LOW);        
  delayMicroseconds(ch11-500);   

  digitalWrite(10, HIGH);           // ch6 
  delayMicroseconds(500);
  digitalWrite(10, LOW);      
  delayMicroseconds(ch12-500);

  digitalWrite(10, HIGH);           // ch7 - spare 
  delayMicroseconds(500);
  digitalWrite(10, LOW);      
  delayMicroseconds(1500-500);

  digitalWrite(10, HIGH);          // ch8 - spare
  delayMicroseconds(500);
  digitalWrite(10, LOW);      
  delayMicroseconds(1500-500);

  digitalWrite(10, HIGH);          // ch9 - spare 
  delayMicroseconds(500);
  digitalWrite(10, LOW);      
  delayMicroseconds(1500-500);

  digitalWrite(10, HIGH);          // ch10 - spare
  delayMicroseconds(500);
  digitalWrite(10, LOW);      
  delayMicroseconds(1500-500);   

  digitalWrite(10, HIGH);          // sync pulse
  delayMicroseconds(500);
  digitalWrite(10, LOW);
  delayMicroseconds(10000);        // longer gap



}
         



