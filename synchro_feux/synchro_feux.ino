const int led_verte=2;
const int led_jaune=3;
const int led_rouge=4;
const int autreled_verte=5;
const int autreled_jaune=6;
const int autreled_rouge=7;
void setup(){
pinMode(led_verte,OUTPUT);
pinMode(led_rouge,OUTPUT);
pinMode(led_jaune,OUTPUT);
pinMode(autreled_verte,OUTPUT);
pinMode(autreled_jaune,OUTPUT);
pinMode(autreled_rouge,OUTPUT);
}
void loop(){
digitalWrite(led_verte,HIGH);
digitalWrite(autreled_rouge,HIGH);	
digitalWrite(led_jaune,LOW);
digitalWrite(led_rouge,LOW);
digitalWrite(autreled_jaune,LOW);
digitalWrite(autreled_verte,LOW);
	delay(3000);
digitalWrite(led_verte,LOW);
digitalWrite(led_jaune,HIGH);
delay(1000);
digitalWrite(led_jaune,LOW);
digitalWrite(led_rouge,HIGH);
digitalWrite(autreled_verte,HIGH);
digitalWrite(autreled_rouge,LOW);
	delay(3000);
digitalWrite(autreled_verte,LOW);
digitalWrite(autreled_jaune,HIGH);
delay(1000);
digitalWrite(autreled_jaune,LOW);
digitalWrite(autreled_rouge,HIGH);
digitalWrite(led_verte,HIGH);
digitalWrite(led_rouge,LOW);
delay(100);
}





