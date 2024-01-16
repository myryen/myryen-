'''module multipli contenant la fonction table'''
def table(nb,max=10):
  '''fonction affichant la table de multiplication d'un nombre de 1*nb jusqu'à max*nb'''
  i=0
  while i <max:
   print (i+1,"*",nb,"=",(i+1)*nb)
   i+=1
