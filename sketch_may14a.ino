int switchpin=D3; //d3
int LedPin=D0; //d0
int switchValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin, OUTPUT);
  pinMode(swithpin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchValue=displayRead(switchpin);
  digitalWrite(LedPin, !switchValue);
}
