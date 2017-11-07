const int led_verte=10;
const int led_bleu=9;
const int led_rouge=8;
const int led_blanc=7;
void setup(){
	pinMode(led_verte,OUTPUT);
	pinMode(led_bleu,OUTPUT);
	pinMode(led_rouge,OUTPUT);
	pinMode(led_blanc,OUTPUT);
}
void loop(){
	eteindre();
	digitalWrite(led_verte,HIGH);
	delay(500);
	eteindre();
	digitalWrite(led_bleu,HIGH);
	delay(500);
	eteindre();
	digitalWrite(led_rouge,HIGH);
	delay(500);
	eteindre();
	digitalWrite(led_blanc,HIGH);
	delay(500);
	eteindre();
	
}
void eteindre(){
	digitalWrite(led_verte,LOW);
	digitalWrite(led_bleu,LOW);
	digitalWrite(led_rouge,LOW);
	digitalWrite(led_blanc,LOW);
	
}
