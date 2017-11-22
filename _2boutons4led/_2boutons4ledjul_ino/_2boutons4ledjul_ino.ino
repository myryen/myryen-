/////////////////////////////
// ********TUTO******** //
/////////////////////////////
int const PINLED1=10;
int const PINLED2=11;
int const PINLED3=12;
int const PINLED4=13;
int const PINBOUTON1=2;
int const PINBOUTON2=3;

#define PINLED1 10
#define PINLED2 11
#define PINLED3 12
#define PINLED4 13
#define PINBOUTON1 2
#define PINBOUTON2 3

int BaudCOM1        = 9600;               // Vitesse de communication serie : 9600, etc, 19200, 57600, 19200, 115200.

void setup()
{
  
	pinMode(PINLED1,OUTPUT);
	pinMode(PINLED2,OUTPUT);
	pinMode(PINLED3,OUTPUT);
	pinMode(PINLED4,OUTPUT);
	pinMode(PINBOUTON1,INPUT);
	pinMode(PINBOUTON2,INPUT);
// 		---		DEBUG	---		//
	Serial.begin(BaudCOM1);						// Initialise la vitesse de connexion série.  
	Serial.println(" TEST ..."); 
	Serial.println(" Setup");
// 		---		DEBUG	---		//

	int etatled=0;
	bool etatbp1=false;
	bool etatbp2=false;

}
void loop(){

	bool etatbp1=readetatbp1();
	bool etatbp2=readetatbp2();
	int etatled=condition(etatbp1,etatbp2,etatled);
	affichage(etatled);
	delay(200); // pour le coup, juste pour avoir le temps de lire les messages Series
}
bool readetatbp1()			// fonction: retourne l'etat du bouton
{
	bool etatbp1=digitalRead(PINBOUTON1);
	// 		---		DEBUG	---		//
	Serial.println(etatbp1);
	// 		---		DEBUG	---		//
	return etatbp1;
}
bool readetatbp2()			// fonction: retourne l'etat du bouton
{
	bool etatbp2=digitalRead(PINBOUTON2);
	// 		---		DEBUG	---		//
	Serial.println(etatbp2);
	// 		---		DEBUG	---		//
	return etatbp2;
}
int condition(bool etatbp1,bool etatbp2,int etatled)		// fonction: retourne une valeur (+/-) pour la led en fonction du bouton en parametre
{
	if (etatbp1==HIGH)
	{
		etatled=etatled+1;
	}
	else if (etatbp2==HIGH)
	{
		etatled=etatled-1;
	}
	else if (etatled>=5)
	{
		etatled=0;
	}
	// 		---		DEBUG	---		//
	Serial.println(etatled);
	// 		---		DEBUG	---		//		
	return etatled;
}
void affichage(int etatled)			// fonction: Change l'etat des leds en fonction d'un decimal en entrée
{
  if (etatled==0)
	{
		digitalWrite(PINLED1,LOW);
		digitalWrite(PINLED2,LOW);
		digitalWrite(PINLED3,LOW);
		digitalWrite(PINLED4,LOW);
	}
	if (etatled==1)
	{
		digitalWrite(PINLED1,HIGH);
		digitalWrite(PINLED2,LOW);
		digitalWrite(PINLED3,LOW);
		digitalWrite(PINLED4,LOW);
	}
	if (etatled==2)
	{
		digitalWrite(PINLED1,HIGH);
		digitalWrite(PINLED2,HIGH);
		digitalWrite(PINLED3,LOW);
		digitalWrite(PINLED4,LOW);
	}
	if (etatled==3)
	{
		digitalWrite(PINLED1,HIGH);
		digitalWrite(PINLED2,HIGH);
		digitalWrite(PINLED3,HIGH);
		digitalWrite(PINLED4,LOW);
	}
	if (etatled==4)
	{
		digitalWrite(PINLED4,HIGH);
		digitalWrite(PINLED1,HIGH);
		digitalWrite(PINLED2,HIGH);
		digitalWrite(PINLED3,HIGH);
	}

}

