const int bouton=2;
int etat;
void setup(){
  pinMode(bouton,INPUT);
  pinMode(13,OUTPUT);
  etat=HIGH;
}

void loop()
{
  etat=digitalRead(bouton);
if(etat==HIGH)
  actionRelache();
  else
  actionAppui();

}
void actionAppui(){
digitalWrite(13,HIGH);
}
void actionRelache(){
  digitalWrite(13,LOW);
}
