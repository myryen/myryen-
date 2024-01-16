import math
print ("tapez 1 pour convertir degrés celsius en fareinheit")
print ("tapez 2 pour convertir fareinheit en degrés celsius")
print ("tapez 3 pour convertir degrés en radians ")
print ("tapez 4 pour convertir radians en degrés")
choix = int(input("entrez votre choix : ")
if choix = 1:
    celcius = int(input("entrez le nombre de degrés celcius :"))
    fareinheit = (celcius*9//5)+32
    print(celcius," degrés celcius font :",fareinheit,"degrés Fahrenheit")
if choix = 2:
    fareinheit = int(input("entrez les degrés en fareinheit : "))  
    celcius = ((fareinheit - 32))*5//9
    print (fareinheit,"degrés Fahrenheit font ",celcius,"degrés celcius")
if choix = 3:
    degrés = int(input("entrez les degrés : "))
    minutes = int(input("entrez les minutes : "))
    secondes = int(input("entrez les secondes :"))
    radians = (degrés+(minutes+secondes//60)//60)*math.pi//60
    print("voici le nombre de radians")
if choix = 4:
    radians = int(input("entrez le nombre de radians"))
        