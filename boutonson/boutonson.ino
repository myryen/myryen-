int const bouton1=12;
int const bouton2=13;
int const buzz=8;
#define NOTE1 400
#define NOTE2 800
int BaudCOM1        = 9600;               // Vitesse de communication serie : 9600, etc, 19200, 57600, 19200, 115200.

void setup(){
  pinMode(bouton1,INPUT);
  pinMode(bouton2,INPUT);
  pinMode(buzz,OUTPUT);
//  bool etatbouton1=HIGH;
  //bool etatbouton2=HIGH;
  // 		---		DEBUG	---		//
	Serial.begin(BaudCOM1);						// Initialise la vitesse de connexion série.  
	Serial.println(" TEST ..."); 
	Serial.println(" Setup");
// 		---		DEBUG	---		//

}
  
  void loop(){
bool etatbouton1=digitalRead(bouton1);
bool etatbouton2=digitalRead(bouton2);
    if (etatbouton1==LOW){
      tone(buzz,NOTE1);}
     else if (etatbouton2==LOW){
        tone(buzz,NOTE2);
      }
      else if (etatbouton1==HIGH || etatbouton2==HIGH){
        noTone(8);}
      	// 		---		DEBUG	---		//
	Serial.println(etatbouton1,etatbouton2);
	// 		---		DEBUG	---		//

      delay(200);
  }
    
