

int const bouton1=2;
int const bouton2=3;// attribution des pin
int const pina=10;
int const pinb=11;
int const pinc=12;
int const pind=13;
int valeur=0;
int baudCOM3=9600;

void setup(){
  pinMode(bouton1,INPUT); //attribution entrees sorties
  pinMode(bouton2,INPUT);
  pinMode(pina,OUTPUT);
  pinMode(pinb,OUTPUT);
  pinMode(pinc,OUTPUT);
pinMode(pind,OUTPUT);
Serial.begin(baudCOM3);
};

void loop(){
  bool etatbp1=digitalRead(bouton1);//LECTURE ETAT BP
  bool etatbp2=digitalRead(bouton2);
  if(etatbp1==LOW)
  valeur=valeur+1;
  if(etatbp2==LOW)
  valeur=valeur-1;
  condition(valeur);
  Serial.println(valeur);
  Serial.println(etatbp1);
  Serial.println(etatbp2);
  delay(200);
  }



int condition(int valeur){//envoi afichage bcp
  if (valeur==0){
    digitalWrite(pina,LOW);
    digitalWrite(pinb,LOW);
    digitalWrite(pinc,LOW);
    digitalWrite(pind,LOW);

  }
  if (valeur==1){
     digitalWrite(pina,HIGH);
    digitalWrite(pinb,LOW);
    digitalWrite(pinc,LOW);
    digitalWrite(pind,LOW);
  }
  if (valeur==2){
      digitalWrite(pina,LOW);
    digitalWrite(pinb,HIGH);
    digitalWrite(pinc,LOW);
    digitalWrite(pind,LOW);
  }
  if (valeur==3){
   digitalWrite(pina,HIGH);
    digitalWrite(pinb,HIGH);
    digitalWrite(pinc,LOW);
    digitalWrite(pind,LOW);
  }
  if (valeur==4){
  digitalWrite(pina,LOW);
    digitalWrite(pinb,LOW);
    digitalWrite(pinc,HIGH);
    digitalWrite(pind,LOW);
  }
  if (valeur==5){
    digitalWrite(pina,HIGH);
    digitalWrite(pinb,LOW);
    digitalWrite(pinc,HIGH);
    digitalWrite(pind,LOW);
  }
  if (valeur==6){
      digitalWrite(pina,LOW);
    digitalWrite(pinb,HIGH);
    digitalWrite(pinc,HIGH);
    digitalWrite(pind,LOW);
  }
  
if (valeur==7){
      digitalWrite(pina,HIGH);
    digitalWrite(pinb,HIGH);
    digitalWrite(pinc,HIGH);
    digitalWrite(pind,LOW);
  }
if (valeur==8){
    digitalWrite(pina,LOW);
    digitalWrite(pinb,LOW);
    digitalWrite(pinc,LOW);
    digitalWrite(pind,HIGH);
  }
if (valeur==9){
  digitalWrite(pina,HIGH);
    digitalWrite(pinb,LOW);
    digitalWrite(pinc,LOW);
    digitalWrite(pind,HIGH);
  }
if (valeur>9){
  valeur=0;}
return valeur;
}












