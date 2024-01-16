#utilisation d'une liste et de branchements conditionnels
print("ce script recherche le plus grand de 3 nombres")
print("veuillez rentrer 3 nombres séparés par une virgule")
ch=input()
#l'association de éval()et liste()permet de convertir
#en liste toute chaine de valeurs séparées par des.virgulez
nn=list(eval(ch))
max, index = nn[0], 'premier'
if nn[1] >max:
    max=nn[1]
    index ='second'
if nn[2]> max:
    max =nn[2]
    index='troisieme'
print("le plus grand de ces nombres est",max)
print("ce nombre est le",index,"de votre liste")   