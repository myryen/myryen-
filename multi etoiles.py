from turtle import *
from étoile import *
up()
goto(-200,50)
down()
t=0
grand=20
while t<=5:
    etoile(grand)
    up()
    forward(5)
    down()
    grand+=5
    t+=1
while t>5 and t<10:
    grand-=5
    etoile(grand)
    up()
    forward(5)
    t+=1
exitonclick()