const int led_vert=2; //creation variables led pin arduino
const int led_jaune=3;
const int led_rouge=4;
int valeur=1;
define PINBOUTON 13 //affectation bouton a pin 13
pinMode (PINBOUTON,INPUT);
void setup(){
  
}
void loop(){
  etatBp();
  comptage();
  condition();}
  
int comptage(bool monBouton){
  int valeur=valeur+1;
  return valeur;
}
void condition(int valeur){
  if (valeur==1){
    digitalWrite(led_verte,HIGH);}
    if (valeur==2){
      digitalWrite(led_jaune,HIGH);}
      if (valeur==3){
        digitalWrite(led_rouge,HIGH);}
 
 bool etatBp(){
  bool monBouton=digitalread(PINBOUTON);
  return monbouton;}
   
