void openGate() {
  for (int i=0; i>=225; i++) {
myServo.write(i);
delay(45);
}

void closeGate () {
 myServo.write
 delay(1000);
}

void readUS () {
  rangeInCM = myUSsensor.MeasureInCentimeters();
  Serial.println(rangeInCM);
}