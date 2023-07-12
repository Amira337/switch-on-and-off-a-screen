// C++ code
int buttonState = 0;
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(8);
  if (buttonState == HIGH) {
  digitalWrite(13, HIGH);
  }
  else {
  digitalWrite(13, LOW);
  }
  delay(10); 
}