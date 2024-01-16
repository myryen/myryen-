



hexa = input("entrez votre code hexadécimal : ").lstrip("#")

if len(hexa)>6 :
    print("trop de caractères")
else:
    print('RGB =', tuple(int(hexa[i:i+2], 16) for i in (0, 2, 4)))