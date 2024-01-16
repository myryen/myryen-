#programme permettant de déterminer si la lettre e se trouve dans la chaîne de caractères.
chaine = str(input("entrez la chaîne de caractères : "))
if 'e' in chaine:
    print("yes")
    string = chaine.replace('e','i')
    #on remplacé le e par un i dans la chaîne de caractères 
    print(string)
else:
    print("non")