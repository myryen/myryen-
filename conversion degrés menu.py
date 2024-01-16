import math
print ("tapez 1 pour convertir degrés celsius en fareinheit")
print ("tapez 2 pour convertir fareinheit en degrés celsius")
print ("tapez 3 pour convertir degrés en radians ")
print ("tapez 4 pour convertir radians en degrés")
choix = int(input("entrez votre choix : "))
if choix == 1:
    celcius = int(input("entrez le nombre de degrés celcius :"))
    fareinheit = (celcius*9//5)+32
    print(celcius," degrés celcius font :",fareinheit,"degrés Fahrenheit")
elif choix == 2:
    fareinheit = int(input("entrez les degrés en fareinheit : "))  
    celcius = ((fareinheit - 32))*5//9
    print (fareinheit,"degrés Fahrenheit font ",celcius,"degrés celcius")
elif choix == 3:
    degrés = float(input("entrez les degrés : "))
    minutes = float(input("entrez les minutes : "))
    secondes = float(input("entrez les secondes :"))
    minutes1 = minutes/60
    secondes1 = secondes/3600
    dec = degrés+minutes1+secondes1
    radians = (dec*math.pi)/180
    print("voici le nombre de radians", float(radians))
elif choix == 4:
    radians = float(input("entrez le nombre de radians : "))
    déc=(180*radians)/math.pi   
    print(float(déc))
    reste=float(déc)-int(déc)
    minutes =reste*60
    print(minutes) 
    reste1=float(minutes)-int(minutes)
    secondes = reste1*60
    print(int(déc)," degrés",int(minutes)," minutes",int(secondes)," secondes")
       
       
       
       
else:
    print ("ceci n'est pas un choix valable")       