annee = input("saisissez une année")
annee = int(annee)
#calcul=0
if type(annee/4) == float:
	print("ce n'est pas une année bisextile")
elif type(annee/4) == int and type (annee/100) == float and type(annee/400) == int:
	print("c est une année bisextile")
#else : print("rien")
#calcul == annee/4
#isinstance(annee,(int))
#print("ce n'est pas une année bisextile")

#calcul == annee/100
#calcul1 == annee/400
