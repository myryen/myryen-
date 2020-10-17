annee = input("saisissez une année")
annee = int(annee)

bissextile = False

if annee % 4 ==0:
	bissextile = True

elif annee % 100 ==0:
	bissextile = False

elif annee % 400 ==0:
	bissextile = True

else :
	bissextile = False

if bissextile :
	print ("c'est une année bissextile")
else:
	print("ce n'est pas une année bissextile")