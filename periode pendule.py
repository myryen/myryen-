'''calcul de la période d'un peson en fonction d'une longueur donnée '''
longueur = float(input("entrez la longueur"))
import math
calcul = longueur/9.82
période = ((2*math.pi) * (math.sqrt(calcul)))
print("voici la période",période)