void setup() {
  Serial.begin(256000);
}

void loop() {
  // If using an electret microphone unit, then it needs adjusting
  // Select the Tools/Serial Plotter and use the display as an oscilloscope
  // Don't forget to select the correct speed! 256000
  // Connect audio to A0 or VP or VN
  Serial.println(analogRead(A0));
}
