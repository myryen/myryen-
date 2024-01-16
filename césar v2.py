#code César v2
phrase = str(input("entrez le mot à coder : "))
décalage = int(input("entrez le décalage : "))
codé=""
for char in phrase:
    position=ord(char)
    if 48<position<57:
        newposition=(position-48+décalage)%10+48
    if 65<position<90:
        newposition=(position-65+décalage)%26+65
    if 97<position<122:
        newposition=(position-97+décalage)%26+97
    else:
        newposition=position
    codé+=chr(newposition)
print("voici le message codé :" )
print(codé)              