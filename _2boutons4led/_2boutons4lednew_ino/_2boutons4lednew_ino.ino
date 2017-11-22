int const led1=10;   //creation des variables
int const led2=11;
int const led3=12;
int const led4=13;
int const bouton1=2;
int const bouton2=3;
int etatled=0;
bool etatbouton1=HIGH;
bool etatbouton2=HIGH;
int BaudCOM1        = 9600;               // Vitesse de communication serie : 9600, etc, 19200, 57600, 19200, 115200.


void setup(){
	pinMode(led1,OUTPUT);    //attribution des entrees sorties
	pinMode(led2,OUTPUT);
	pinMode(led3,OUTPUT);
	pinMode(led4,OUTPUT);
	pinMode(bouton1,INPUT);
	pinMode(bouton2,INPUT);

// 		---		DEBUG	---		//
	Serial.begin(BaudCOM1);						// Initialise la vitesse de connexion série.  
	Serial.println(" TEST ..."); 
	Serial.println(" Setup");
// 		---		DEBUG	---		//

}
void loop(){

etatbouton1=digitalRead(bouton1);
etatbouton2=digitalRead(bouton2);
	if (etatbouton1==LOW){
		etatled=etatled+1;
	}
	
	else if (etatbouton2==LOW){
		etatled=etatled-1;	}
condition(etatled);
	// 		---		DEBUG	---		//
	Serial.println(etatled);
	// 		---		DEBUG	---		//
delay(200);
}

int condition(int etatled){
	if (etatled==0){
		digitalWrite(led1,HIGH);
		digitalWrite(led2,HIGH);
		digitalWrite(led3,HIGH);
		digitalWrite(led4,HIGH);
	}
	
	if (etatled==1){
		digitalWrite(led1,LOW);
		digitalWrite(led2,HIGH);
		digitalWrite(led3,HIGH);
		digitalWrite(led4,HIGH);
	}
	
if (etatled==2){
		digitalWrite(led1,LOW);
		digitalWrite(led2,LOW);
		digitalWrite(led3,HIGH);
		digitalWrite(led4,HIGH);
	}
	
if (etatled==3){
		digitalWrite(led1,LOW);
		digitalWrite(led2,LOW);
		digitalWrite(led3,LOW);
		digitalWrite(led4,HIGH);
	}
	if (etatled==4){
		digitalWrite(led1,LOW);
		digitalWrite(led2,LOW);
		digitalWrite(led3,LOW);
		digitalWrite(led4,LOW);
	}
	if (etatled>4)
	etatled=4;
return etatled;

}

