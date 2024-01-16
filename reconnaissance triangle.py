a = int(input("entrez le premier côté : "))
b = int(input("entrez le deuxième côté : "))
c = int(input("entrez le troisième côté : "))
coté =sorted([a,b,c])
carré=pow(coté[0],2)+pow(coté[1],2)

if pow(coté[2],2)==carré:
     print("le triangle est rectangle")
elif (coté[1]==coté[2] or coté[1]==coté[0] or coté[2]==coté[0]) and coté[1]==coté[2]==coté[0]:
    print("le triangle est équilatéral")
elif coté[1]==coté[2] or coté[1]==coté[0] or coté[2]==coté[0]:
        print("le triangle est isocèle ")   

