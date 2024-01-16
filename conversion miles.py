miles = int(input("entrez votre vitesse en miles/h : "))
facteur = 1609
kilo = miles * (facteur/1000)
print(" voici la vitesse:",kilo,"km/h")
mètre = (miles*facteur)/3600
print("voici la vitesse", mètre,"m/s")