i=0
liste =[]
infini=2
while infini > 1:
    nombres=int(input("entrez les notes : "))
    if nombres>0:
        liste.append(nombres)
        print("le nombre de notes rentrées",len(liste))
        print("la note mini",min(liste))
        print("la note max",max(liste))
        moyenne=sum(liste)/len(liste)
        print("la moyenne des notes",moyenne)
    else:
        break    