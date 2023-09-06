bool openGate () {

  for (int i = 0; i <= 225; i++) {
    myServo.write(i);
    delay(15);
    isGateOpen = true;
  }

}

void closeGate () {

  for (int i = 0; i <= 225; i++) {
    myServo.write(225-i);
    delay(15);
    isGateOpen = false;
  }
  
}