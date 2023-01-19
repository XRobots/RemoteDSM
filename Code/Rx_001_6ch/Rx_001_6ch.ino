// measures between rising edge of each pulse to the next

const int interruptPin = 2; // pin to use for the interrupt
unsigned long pulseStart = 0; // variable to store the time when the pulse starts
unsigned long distance = 0; // variable to measure the time between two rising edges.

unsigned long currentMillis;
long previousMillis = 0;    // set up timers
long interval = 500;        // time constant for timer

int counter = 0;
int ch1;
int ch2;
int ch3;
int ch4;
int ch5;
int ch6;

int flag = 0;

void setup() {
  // initialize serial communication
  Serial.begin(115200);

  // set the interrupt pin as an input and enable the pull-up resistor
  pinMode(interruptPin, INPUT_PULLUP);

  // attach the interrupt function to the interrupt pin
  attachInterrupt(digitalPinToInterrupt(interruptPin), pulseCounter, FALLING);
}

void loop() {

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
        Serial.println(ch6);

        delay(10);

}

// interrupt function to count the pulse width
void pulseCounter() {
  
      distance = micros() - pulseStart;  
      pulseStart = micros();

      if (distance < 5000) {
        counter = counter + 1;        
      }
      else if (distance > 5000 || counter >=7) {
        counter = 0;
      }      

      // put values in variables
       
      if (counter == 1) {
          ch1 = distance;
      }
      else if (counter == 2) {
          ch2 = distance;
      }
      else if (counter == 3) {
          ch3 = distance;
      }
      else if (counter == 4) {
          ch4 = distance;
      }
      else if (counter == 5) {
          ch5 = distance;
      }
      else if (counter == 6) {
          ch6 = distance;
      }

      


}
