noms =['jean','maximilien','brigitte','sonia','jean-pierre','sandra']
i=0
moins=[]
plus=[]
while i<len(noms):
    if len(noms[i])<6:
        moins.append(noms[i])
    else:
        plus.append(noms[i])
    i+=1    
print ("voici les.moins de six lettres",moins)
print ("voici les plus de six lettre",plus)        