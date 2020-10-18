import random
nombre = 0
devine = 0
n=0  #variable nombre de coups
nombre = random.randint (0,100) #choix d'un nombre aléatoirement
while 1:
	devine = input("devinez le  nombre : ")
	devine = int(devine)
	if devine < nombre :
		print("plus grand")
	if devine > nombre :
		print("plus petit")
	if devine == nombre :
		print("vous avez trouvé",nombre,"en",n+1,"coups")
		break
	n+=1