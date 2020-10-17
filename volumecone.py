#calcul du volume d'un cone droit
#V=(b*h)/3
#b=pi *r²
import math    
volume = 0
base = 0
pi = math.pi       #entré de pi dans la variable
hauteur = input ("entrez la hauteur : ")    #demande de la hauteur
rayon = input ("entrez le rayon : ")  #demande du rayon
hauteur = int(hauteur)  #vérification de l'entier
rayon = int(rayon)  #vérification de l'entier
base = pi * rayon * rayon  #calcul de la base
volume = (base * hauteur)/3 #calcul du volume

#debug#
#print (math.pi)
#print (hauteur)
#print (base)
#print (volume)

print ("voici le volume : ", volume)
