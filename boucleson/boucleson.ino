int varson=0;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
for (varson=0; varson<=2000; varson++){
  tone(13,varson);
  delay(1);
}
}
