prix =0
prix = int(prix)

while 1:
	prix = input ("entrez le prix hors taxes : ")
	prix = int(prix)
	lettre = input("tapez Q pour quitter :")
	if lettre == "Q":
		break
prix = prix + ((prix * 19.6) / 100)
print("voici le prix : ",prix,"ttc")		