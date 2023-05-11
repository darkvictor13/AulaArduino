int count = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("Ola Mundo!");
  Serial.println("Executei a função setup");
}

void loop() {
  Serial.print("Executei o loop ");
  Serial.print(count);
  Serial.println(" vezes");
  delay(1000);
}
