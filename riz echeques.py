'''programme plaçant un grain de riz sur une case d'un echequier, puis deux sur la seconde et 4 sur la troisième jusqu'à la 64 ème case'''
case = 1
riz =1
while case < 65:
    riz = riz*2
    case+=1
    print (riz)
    print (float(riz))