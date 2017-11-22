int const led1=10;   //creation des variables
int const led2=11;
int const led3=12;
int const led4=13;
int const bouton1=2;
int const bouton2=3;
int BaudCOM1        = 9600;               // Vitesse de communication serie : 9600, etc, 19200, 57600, 19200, 115200.




void setup(){
	pinMode(led1,OUTPUT);    //attribution des entrees sorties
	pinMode(led2,OUTPUT);
	pinMode(led3,OUTPUT);
	pinMode(led4,OUTPUT);
	pinMode(bouton1,INPUT);
	pinMode(bouton2,INPUT);
//	int etatled=0;
//	bool etatbp1=HIGH;
//	bool etatbp2=HIGH;
}
void loop(){
  // 		---		DEBUG	---		//
	Serial.begin(BaudCOM1);						// Initialise la vitesse de connexion série.  
	Serial.println(" TEST ..."); 
	Serial.println(" Setup");
// 		---		DEBUG	---		//

	bool etatbp1=readetatbp1();
	bool etatbp2=readetatbp2();
	int etatled=condition(etatbp1,etatbp2,etatled);
       	affichage(etatled);
       	delay(200); // pour le coup, juste pour avoir le temps de lire les messages Series
}

bool readetatbp1(){                                //lecture etat bouton 1
	bool etatbp1=digitalRead(bouton1);
	// 		---		DEBUG	---		//
	Serial.println(etatbp1);
	// 		---		DEBUG	---		//

	return etatbp1;
}
bool readetatbp2(){
	bool etatbp2=digitalRead(bouton2);            //lecture etat bouton 2
	// 		---		DEBUG	---		//
	Serial.println(etatbp2);
	// 		---		DEBUG	---		//

	return etatbp2;
}
int condition(bool etatbp1,bool etatbp2,int etatled){        //condition, en fonction des bp appuyes, incrementation ou decrementation du nombre de leds

	if (etatbp1==LOW)
{
	etatled++;}
        else if (etatbp2==LOW){
	etatled--;}
	// 		---		DEBUG	---		//
	Serial.println(etatled);
	// 		---		DEBUG	---		//

return etatled;
}
void affichage(int etatled)        //affichage du nombre de leds
{
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

	if (etatled>4){              //si nb de led au dessus de 4 ne pas incrementer
	etatled=4;}
}
