const int buttonPin = 2;
unsigned long lastDebounceTime = 0; 
unsigned long debounceDelay = 50; 
int buttonState; 
int lastButtonState = LOW; 
int count = 1; 

void buttonPressed() {
  int reading = digitalRead(buttonPin); 
  if (reading == LOW){
    if ((millis() - lastDebounceTime) > debounceDelay){
      lastDebounceTime = millis(); 
      Serial.println("Interrupt"); 
       if (reading != buttonState){
         buttonState = reading; 
         if (buttonState == HIGH){
          
         }
        }
    }
  }
  lastButtonState = reading; 
}

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonPressed, CHANGE);
  Serial.begin(9600);
}

void loop() {
  
}
