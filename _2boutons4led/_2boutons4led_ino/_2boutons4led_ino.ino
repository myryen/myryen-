int const led1=10;
int const led2=11;
int const led3=12;
int const led4=13;
int const bout1=2;
int const bout2=3;
void setup(){
	pinMode(led1,OUTPUT);
	pinMode(led2,OUTPUT);
	pinMode(led3,OUTPUT);
	pinMode(led4,OUTPUT);
	pinMode(bout1,INPUT);
	pinMode(bout2,INPUT);
	int etatled=0;
	bool etatbp1=false;
	bool etatbp2=false;
}
void loop(etatbp1,etatbp2){
	etatbp1=readetatbp1();
	etatbp2=readetatbp2();
	condition();
	affichage();
}
bool readetatbp1(){
	bool etatbp1=digitalRead(bout1);
	return etatbp1;
}
bool readetatbp2(){
	bool etatbp2=digitalRead(bout2);
	return etatbp2;
}
int condition(etatbp1,etatbp2,etatled){

	if (etatbp1==HIGH)
	etatled=etatled+1;
	else if (etatbp2==HIGH)
	etatled=etatled-1;
return etatled;
}
void affichage(etatled){
	if (etatled==0){
	digitalWrite(led1,LOW);
	digitalWrite(led2,LOW);
	digitalWrite(led3,LOW);
	digitalWrite(led4,LOW);
		}
	
	if (etatled==1){
	digitalWrite(led1,HIGH);
	digitalWrite(led2,LOW);
	digitalWrite(led3,LOW);
	digitalWrite(led4,LOW);
		}
	
	if (etatled==2){
	digitalWrite(led1,HIGH);
	digitalWrite(led2,HIGH);
	digitalWrite(led3,LOW);
	digitalWrite(led4,LOW);
		}
	
	if (etatled==3){
	digitalWrite(led1,HIGH);
	digitalWrite(led2,HIGH);
	digitalWrite(led3,HIGH);
	digitalWrite(led4,LOW);
		}
	
	if (etatled==4){
	digitalWrite(led4,HIGH);
	digitalWrite(led1,HIGH);
	digitalWrite(led2,HIGH);
	digitalWrite(led3,HIGH);
		}
	if (etatled>=5){
	etatled=0;}
}
