'''programme calculant l'aire et le périmètre d'un triangle'''
print("entrez la longueur des 3 cotés")
import math
a=int(input("a : "))
b=int(input("b : "))
c=int(input("c : "))
d = (a+b+c)/2
péri=a+b+c
aire =math.sqrt(d*(d-a)*(d-b)*(d-c))
print("demi périmètre",d)
print ("voici l'aire du triangle : ",aire)
print ("voici le périmètre : ",péri)
