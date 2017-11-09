#include <LiquidCrystal.h>
#define PINBOUTON 13
LiquidCrystal monEcran(12,11,5,4,3,2);
void setup(){
	pinMode (PINBOUTON, INPUT);
	monEcran.begin(16,2);	
}
void loop(){
	bool etatBp=false;
	 etatBp=lectureBouton();
	String Phrase=maCondition(etatBp);
	affichagelcd(Phrase);
}
bool lectureBouton(){
	bool monBouton=digitalRead(PINBOUTON);
	return monBouton;
}
String maCondition(bool etat){
  String Phrase="";
	if (etat==true){
		Phrase="bouton ok";

	}
	else Phrase="pas ok";
	return Phrase;
}

void affichagelcd(String Phrase){
	monEcran.clear();

	monEcran.print(Phrase);
delay(100);
}
