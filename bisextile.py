an = int(input("tapez l'année : "))
if an%4 == 0 and an%100==0 and an%400 == 0:
    print ("l'année", an ," est bisextile")
elif an %4 == 0 and an%100 !=0:
    print ("l'année est bisextile")
else :
    print ("l'année ", an ," n'est pas bisextile")