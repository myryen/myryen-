#include <LiquidCrystal.h>;
LiquidCrystal monEcran(12,11,5,4,3,2);
void setup(){
monEcran.begin(16,2);
	monEcran.clear();
	monEcran.print("coucou");
	monEcran.setCursor(0,1);
	monEcran.print("petite perruche");
	
}
void loop(){}
