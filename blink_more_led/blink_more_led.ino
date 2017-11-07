const int led_vert=10;
const int led_bleu=9;
const int led_rouge=8;
const int led_blanc=7;
void setup()
{
  pinMode(led_rouge,OUTPUT);
  pinMode(led_bleu,OUTPUT);
  pinMode(led_vert,OUTPUT);
  pinMode(led_blanc,OUTPUT);
  
}
  void loop()
  {
    digitalWrite(led_rouge,LOW);
     digitalWrite(led_vert,LOW);
      digitalWrite(led_bleu,LOW);
       digitalWrite(led_blanc,LOW);
  delay(200);
  digitalWrite(led_vert,HIGH);
  digitalWrite(led_rouge,LOW);
  digitalWrite(led_bleu,LOW);
  digitalWrite(led_blanc,LOW);
  delay(200);
  digitalWrite(led_rouge,LOW);
  digitalWrite(led_vert,LOW);
  digitalWrite(led_blanc,LOW);
  digitalWrite(led_bleu,HIGH);
  delay(200);
  digitalWrite(led_bleu,LOW);
  digitalWrite(led_vert,LOW);
  digitalWrite(led_bleu,LOW);
  digitalWrite(led_blanc,LOW);
  digitalWrite(led_rouge,HIGH);
  delay(200);
  digitalWrite(led_rouge,LOW);
  digitalWrite(led_rouge,LOW);
  digitalWrite(led_vert,LOW);
  digitalWrite(led_bleu,LOW);
  digitalWrite(led_blanc,HIGH);
  delay(200);
  
}
