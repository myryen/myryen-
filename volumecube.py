def volumeCube(a,b,c):
    volume=a*b*c
    print ("le volume du cube est : ",volume)
    return volume
    
a=float(input("entrez la valeur du premier côté : "))
b=float(input("entrez la valeur du second côté : "))
c=float(input("entrez la valeur du troisième côté : "))
volumeCube(a,b,c)