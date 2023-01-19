// sends ten channels of PPM by bit banging.

int ch1 = 1500;       // initial values
int ch2 = 1550;
int ch3 = 1500;
int ch4 = 1500;
int ch5 = 1500;
int ch6 = 1500;


void setup() {
  pinMode(9, OUTPUT);       // PPM output pin
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


  digitalWrite(9, HIGH);
  delayMicroseconds(500);       // pulse
  digitalWrite(9, LOW);
  delayMicroseconds(ch1-500);   // gap for the remaining period
  
  digitalWrite(9, HIGH);        
  delayMicroseconds(500);
  digitalWrite(9, LOW);     
  delayMicroseconds(ch2-500);   
  
  digitalWrite(9, HIGH);        
  delayMicroseconds(500); 
  digitalWrite(9, LOW);      
  delayMicroseconds(ch3-500);   

  digitalWrite(9, HIGH);
  delayMicroseconds(500);  
  digitalWrite(9, LOW);      
  delayMicroseconds(ch4-500);   

  digitalWrite(9, HIGH);        
  delayMicroseconds(500);
  digitalWrite(9, LOW);        
  delayMicroseconds(ch5-500);   

  digitalWrite(9, HIGH);          // ch6 
  delayMicroseconds(500);
  digitalWrite(9, LOW);      
  delayMicroseconds(ch6-500);

  digitalWrite(9, HIGH);          // ch7 
  delayMicroseconds(500);
  digitalWrite(9, LOW);      
  delayMicroseconds(1000-500);

  digitalWrite(9, HIGH);          // ch8 
  delayMicroseconds(500);
  digitalWrite(9, LOW);      
  delayMicroseconds(1100-500);

  digitalWrite(9, HIGH);          // ch9 
  delayMicroseconds(500);
  digitalWrite(9, LOW);      
  delayMicroseconds(1200-500);

  digitalWrite(9, HIGH);          // ch10 
  delayMicroseconds(500);
  digitalWrite(9, LOW);      
  delayMicroseconds(1300-500);


  digitalWrite(9, HIGH);          // sync pulse
  delayMicroseconds(500);
  digitalWrite(9, LOW);
  delayMicroseconds(5000);        // longer gap 

}
         



