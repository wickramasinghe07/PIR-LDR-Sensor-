void setup() {
  pinMode (5, INPUT);
  pinMode (13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(12, OUTPUT);
}

void loop() {
  int val = digitalRead(5);

  if(val == 1) {
    
    digitalWrite(13, HIGH);
  }
  
  else{
    digitalWrite(13, LOW);
      }

  //read the pushbutton value into a variable
  int sensorVal = digitalRead(2);
  //print out the value of the pushbutton
  Serial.println(sensorVal);

  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  if (sensorVal == LOW) {
    digitalWrite(12, LOW);
  } else {
    digitalWrite(12, HIGH);
  }

 
}
  
  
