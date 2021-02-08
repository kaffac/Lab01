byte bytesIn;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    bytesIn = Serial.read();
    Serial.write(bytesIn);
    }

}