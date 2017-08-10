void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valor;
  valor = random(0,100);
  Serial.println(valor);
  delay(250);
}
