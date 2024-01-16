from square import *
from triangle import *
from étoile import *
from turtle import *
up()
goto(-200,50)
i=0
while i<10:
    down()
    carre(25)
    up()
    forward(30)
    down()
    triangle(25)
    up()
    forward(30)
    down()
    etoile(25)
    up()
    #left(90)
    #forward(15)
    #right(90)
    forward(5)
    i=i+1
a=input()
