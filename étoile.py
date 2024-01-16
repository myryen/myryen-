from turtle import *
def etoile(taille):
    j=0
    while j<3:
        down()
        forward(taille)
        right(120)
        j+=1
    left(90)
    
    up()
    backward(taille-10)
    right(90)
    while j>=3 and j<6:
        
        
        down()
        forward(taille)
        left(120)
        
        
        j+=1
    up()
    left(90)
    forward(taille-10)
    right(90)
    forward(taille)

