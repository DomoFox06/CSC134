#print("I want a taco")
#M2Lab2
#Domonic Yarnall
#2/5/2025

from turtle import *

screen = Screen()
screen.bgcolor("blue")

t = Turtle()
t.pencolor("green")

t.pensize(4)
#start at the bottom
t.penup()
t.right(90)
t.fd(200)
t.pendown()
#color

#right petal
t.left(180)
t.fd(100)
t.right(45)
t.fd(50)
t.left(30)
t.fd(25)
t.left(90)
t.fd(25)
t.left(60)
t.fd(30)
t.left(50)
t.fd(50)
t.left(180)
t.fd(100)
#left petal

t.left(45)
t.fd(50)
t.right(30)
t.fd(25)
t.right(90)
t.fd(25)
t.right(60)
t.fd(30)
t.right(50)
t.fd(50)
t.right(180)
t.fd(100)
#start flower
t.pensize(2)
t.fillcolor("brown")
t.begin_fill()
t.right(90)
t.circle(50)
t.end_fill()
#flower petals
t.fillcolor("yellow")
t.begin_fill()

t.left(-45)
for side in range(2):
    t.forward(25)
    t.left(120)
t.right(210)
for side in range(2):
    t.forward(25)
    t.left(120)
t. left(150)
for side in range(2):
    t.forward(25)
    t.left(120)
t.right(211)
for side in range(2):
    t.forward(25)
    t.left(120)

t.left(150)
for side in range(2):
    t.forward(25)
    t.left(120)
t.left(150)
for side in range(2):
    t.forward(25)
    t.left(120)
t.left(150)
for side in range(2):
    t.forward(25)
    t.left(120)
t.left(150)
for side in range(2):
    t.forward(25)
    t.left(120)
t.left(150)
for side in range(2):
    t.forward(25)
    t.left(120)
t.left(150)
for side in range(2):
    t.forward(25)
    t.left(120)
t.left(150)
for side in range(2):
    t.forward(25)
    t.left(120)
t.left(150)
for side in range(2):
    t.forward(25)
    t.left(120)

t.end_fill()

t.pensize(2)
t.fillcolor("brown")
t.begin_fill()
t.right(166)
t.circle(50)
t.end_fill()

t.right(700)
