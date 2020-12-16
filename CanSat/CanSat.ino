void setup() {
  // put your setup code here, to run once:
  serial.open(9600)
  int x = 2;
}

void loop() {
  // put your main code here, to run repeatedly:
  if x == 2 {
    serial.write(x);
  }
}
