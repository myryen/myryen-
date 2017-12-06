
int baudCOM3=9600;
int const bouton=0;

int const segm10=11;
int const segm9=10;
int const segm6=8;
int const segm7=9;
int const segm4=7;
int const segm2=6;
int const segm1=5;
int valeur=0;
void setup(){
  Serial.begin(baudCOM3);

  pinMode(bouton,INPUT);
  pinMode(segm1,OUTPUT);
  pinMode(segm2,OUTPUT);
  pinMode(segm4,OUTPUT);
pinMode(segm10,OUTPUT);
  pinMode(segm6,OUTPUT);
  pinMode(segm7,OUTPUT);
  pinMode(segm9,OUTPUT);
};

void loop(){
  int etatbp=analogRead(bouton);
  
  if(etatbp>90 && etatbp<101)
  valeur=valeur+1;
  if(etatbp>40 && etatbp<53)
  valeur=valeur-1;
 
Serial.println(etatbp);
 condition(valeur);  
  delay(200);
  }


int condition(int valeur){
  if (valeur==0){
    digitalWrite(segm1,HIGH);
    digitalWrite(segm2,HIGH);
    digitalWrite(segm4,HIGH);
    digitalWrite(segm6,HIGH);
    digitalWrite(segm7,HIGH);
    digitalWrite(segm9,HIGH);
    digitalWrite(segm10,LOW);
  }
  if (valeur==1){
    digitalWrite(segm1,LOW);
    digitalWrite(segm2,LOW);
    digitalWrite(segm4,HIGH);
    digitalWrite(segm6,HIGH);
    digitalWrite(segm7,LOW);
    digitalWrite(segm9,LOW);
    digitalWrite(segm10,LOW);
  }
  if (valeur==2){
    digitalWrite(segm1,HIGH);
    digitalWrite(segm2,HIGH);
    digitalWrite(segm4,LOW);
    digitalWrite(segm6,HIGH);
    digitalWrite(segm7,HIGH);
    digitalWrite(segm9,LOW);
    digitalWrite(segm10,HIGH);
  }
  if (valeur==3){
    digitalWrite(segm1,LOW);
    digitalWrite(segm2,HIGH);
    digitalWrite(segm4,HIGH);
    digitalWrite(segm6,HIGH);
    digitalWrite(segm7,HIGH);
    digitalWrite(segm9,LOW);
    digitalWrite(segm10,HIGH);
  }
  if (valeur==4){
    digitalWrite(segm1,LOW);
    digitalWrite(segm2,LOW);
    digitalWrite(segm4,HIGH);
    digitalWrite(segm6,HIGH);
    digitalWrite(segm7,LOW);
    digitalWrite(segm9,HIGH);
    digitalWrite(segm10,HIGH);
  }
  if (valeur==5){
    digitalWrite(segm1,LOW);
    digitalWrite(segm2,HIGH);
    digitalWrite(segm4,HIGH);
    digitalWrite(segm6,LOW);
    digitalWrite(segm7,HIGH);
    digitalWrite(segm9,HIGH);
    digitalWrite(segm10,HIGH);
  }
  if (valeur==6){
    digitalWrite(segm1,HIGH);
    digitalWrite(segm2,HIGH);
    digitalWrite(segm4,HIGH);
    digitalWrite(segm6,LOW);
    digitalWrite(segm7,HIGH);
    digitalWrite(segm9,HIGH);
    digitalWrite(segm10,HIGH);
  }
  
if (valeur==7){
    digitalWrite(segm1,LOW);
    digitalWrite(segm2,LOW);
    digitalWrite(segm4,HIGH);
    digitalWrite(segm6,HIGH);
    digitalWrite(segm7,HIGH);
    digitalWrite(segm9,LOW);
    digitalWrite(segm10,LOW);
  }
if (valeur==8){
    digitalWrite(segm1,HIGH);
    digitalWrite(segm2,HIGH);
    digitalWrite(segm4,HIGH);
    digitalWrite(segm6,HIGH);
    digitalWrite(segm7,HIGH);
    digitalWrite(segm9,HIGH);
    digitalWrite(segm10,HIGH);
  }
if (valeur==9){
    digitalWrite(segm1,LOW);
    digitalWrite(segm2,HIGH);
    digitalWrite(segm4,HIGH);
    digitalWrite(segm6,HIGH);
    digitalWrite(segm7,HIGH);
    digitalWrite(segm9,HIGH);
    digitalWrite(segm10,HIGH);
  }
if (valeur>9){
  valeur=0;}
return valeur;
}












