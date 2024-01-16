nombre = int(input("entrez le nombre de secondes :"))
jours =0
heures=0
minutes=0
secondes =0

if nombre > 86400 :
    jours = nombre//86400
    print(jours,"jours")
if  nombre>3600:
    heures=nombre//3600
    print(heures,"heures")
if 60<nombre :   
    minutes =nombre//60
    print(minutes,"minutes")
    print(nombre,"secondes")
    
jours = nombre//86400  
heures = (nombre%86400)//3600
minutes =(heures%60)//60
print (heures,minutes,secondes)  
