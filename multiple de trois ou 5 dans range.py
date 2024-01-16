a=int(input("sélectionnez la borne a"))
b=int(input("sélectionnez la borne b"))
i=0
liste=[]
while i<b:
    if i%3==0 or i%5==0:
        liste.append(i)
    i+=1    
print(sum(liste))       
    