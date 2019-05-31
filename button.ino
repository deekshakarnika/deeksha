int switchPin=D5;
int LedPin=D3;
int switchValue; 
void setup() {
 pinMode(LedPin, OUTPUT);
 pinMode(switchPin, INPUT_PULLUP); 

}
void loop() {
 switchValue=digitalRead(switchPin);
 digitalWrite(LedPin, !switchValue);

}
