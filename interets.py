'''code.permetant de calculer les intérêts d'une somme sur X ans a 4.3%'''
somme =int(input("entrez la somme : "))
durée= int(input("entrez la durée : "))#requetes sommes et durée
i=0
while i < durée :
    intérêts=(somme*4.3)/100
    somme = somme + intérêts
    print(float(somme),float(intérêts))
    i+=1
    