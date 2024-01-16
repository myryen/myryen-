var = str("mélange")
var1="".join(reversed(var))
print(var1)
#voicinune seconde façon d'inverser une chaîne de caractère
ch = input("entrez le mot : ")
long=len(ch)
i =long -1
nch =""
while i>=0:
    nch = nch+ch[i]
    i=i-1
print(nch)
if nch == ch :
    print ("ceci est un palindrome")
