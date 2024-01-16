liste =[32,5, 12,8,3,75,2,15]
i=0
listepaire=[]
listeimpaire=[]
while i<len(liste):
    if liste[i]%2==0:
        listepaire.append(liste[i])
    else:
        listeimpaire.append(liste[i])
    i+=1    
print ("voici les pair",listepaire)        
print ("voici les impair",listeimpaire)    