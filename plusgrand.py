def plusgrand(a,b,c):
    if a>b and a>c:
        print (a," est le plus grand")
    elif b>a and b>c:
        print(b,"est le plus grand")
    else:
        print(c," est le plus grand")
        return a,b,c 
a=int(input("entrez le premier nombre"))
b=int(input("entrez le second nombre"))  
c=int(input("entrez le troisième nombre"))
plusgrand(a,b,c)             