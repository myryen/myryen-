def table(base):
    n=1
    while n<11:
        print(n,"fois",base,"égale: ",n * base)
        n+=1
t=int(input("entrez la table que vous souhaitez "))
table(t)        