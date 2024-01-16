clair=str(input(" entrez le mot à coder :"))
decalage=int(input("entrez le décalage :"))
def cesar(clair,decalage):
    n=0
    modif=list(clair)
    while n<len(clair):
       
       extract=ord(modif[n])
       ajout=extract+decalage
       
       modif[n]=chr(ajout)
       
       
       n+=1
    str=''.join(modif)
    print("voici le texte codé",str)
cesar(clair,decalage)   