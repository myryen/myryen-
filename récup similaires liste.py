L1=[9,8,7,14,3,2,'a','p','bonjour','b']
L2=['b',1,9.2,6,3,9,'p']
i=0
L3=[]
while i<len(L2):
    if L2[i] in L1:
        L3.append(L2[i])
    i+=1
print(L3)    