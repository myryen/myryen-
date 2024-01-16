an = int(input("entrez l'année : "))
mois = int(input("entrez le mois : "))
jour = int(input("entrez le jour : "))
week =['dimanche','lundi','mardi','mercredi','jeudi','vendredi','samedi']
if mois<3:
    weekday=(int((23*mois)/9)+jour+4+an+int((an-1)/4)-int((an-1)/100)+int((an-1)/400))%7
    weekday=int(weekday)
    print ("le jour est",week[weekday])
else:
    weekday=(int((23*mois)/9)+jour+2+an+int(an/4)-int(an/100)+int(an/400))%7
    weekday=int(weekday)
    print("le jour est",week[weekday])
  