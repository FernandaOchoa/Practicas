void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int v1;
  int v2;
  v1 = random(0,100);
  v2 = random(0,100);

  Serial.print(v1);
  Serial.print(",");
  Serial.println(v2);
  delay(250);
}
