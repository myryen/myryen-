chaine = str(input("entrez le nom : "))
cr="*"
i=1
long = len(chaine)
chaine2= chaine[0]
while i<long:
    chaine2=chaine2+cr+chaine[i]
    i+=1
print(chaine2)
    