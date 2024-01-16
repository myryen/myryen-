i=0
T3=[]
T1=[31,28,31,30,31,30,31,31,30,31,30,31]
T2=['janvier','février','mars','avril','mai','juin','juillet','aout','septembre','octobre','novembre','decembre']
while i<len(T1):
    T3.append(T1[i])
    T3.append(T2[i])
    print(T2[i], end=' ')
    i+=1
print(T3)
    
    