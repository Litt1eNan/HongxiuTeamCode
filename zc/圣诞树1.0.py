import turtle
import math
import random
import time
x=0
y=200
#五角星
turtle.penup()
turtle.goto(x,y)
turtle.pensize(3)
turtle.shape('blank')
turtle.pencolor("orange")
turtle.pendown ()
turtle.right (108)
turtle.fillcolor ("yellow")
turtle.begin_fill ()
for i in range(5):
    turtle.forward (30)
    turtle.right (72)
    turtle.forward (30)
    turtle.right(216)
turtle.end_fill ()
y=y-60
turtle.penup()
turtle.goto (x,y)
turtle.pendown()
turtle.pensize(5)
turtle.right (-18)
turtle.forward (30)
#画树冠
fd=30
turtle.pencolor("green")
turtle.right(60)
turtle.fillcolor ("green")
turtle.begin_fill ()
turtle.forward (fd)
turtle.right(210)
turtle.forward (math.sqrt(3)*fd)
turtle.right (-150)
turtle.forward (fd)
turtle.end_fill()
turtle.right(-60)
turtle.penup()
y=y-30
#定位循环树冠坐标
y=y-fd/2
x=x-(math.sqrt(2)*fd)/4
turtle.goto(x,y)
turtle.pendown()

#开始循环
for i in range(4):
    turtle.begin_fill ()
    fd=fd*math.sqrt(3)
    d=math.sqrt(3)*fd
    turtle.forward (fd)
    turtle.right (210)
    turtle.forward (5/4*d)
    turtle.right (-150)
    turtle.forward (fd)
    turtle.right (-60)
    turtle.end_fill ()
    y=y-fd/2
    x=x-1/8*d
    turtle.penup()
    turtle.goto(x,y)
    turtle.pendown ()
#画树根
x=x+1/8*d
turtle.penup()
turtle.goto(x,y)
turtle.pendown()
turtle.right (-60)
turtle.pensize (1)
turtle.pencolor("brown")
turtle.fillcolor("brown")
turtle.begin_fill ()
turtle.forward (100)
turtle.right(-90)
turtle.forward (5/16*d)
turtle.right(-90)
turtle.forward (100)
turtle.end_fill ()
#画雪花
turtle.pencolor("#6ADBFA")
for i in range(200):
    #time.sleep(10)
    a=400-800*random.random ()
    b=400-800*random.random ()
    turtle.penup()
    turtle.goto(a,b)
    turtle.pendown()
    turtle.pensize(2)
    #开始
    turtle.forward (20)
    turtle.goto(a,b+15)
    turtle.right(45)
    turtle.forward(5)
    turtle.goto(a,b+15)
    turtle.right(-90)
    turtle.forward(5)
    turtle.goto (a,b+15)
    turtle.goto (a,b+10)
    turtle.right (45)
    turtle.right (60)
    turtle.forward(10)
    turtle.goto(a+5/2*math.sqrt(3),b+10+5/2)
    turtle.right(45)
    turtle.forward (5)
    turtle.goto(a+5/2*math.sqrt(3),b+10+5/2)
    turtle.right (-90)
    turtle.forward (5)
    turtle.right(45)
    turtle.right (-60)
    turtle.penup()
    turtle.goto(a,b+10)
    turtle.pendown()
    turtle.right(-60)
    turtle.forward (10)
    turtle.right (45)
    turtle.goto(a-5/2*math.sqrt(3),b+10+5/2)
    turtle.forward (5)
    turtle.goto(a-5/2*math.sqrt(3),b+10+5/2)
    turtle.right(-90)
    turtle.forward(5)
    turtle.right(105)
    turtle.penup()
    turtle.goto (a,b+10)
    turtle.right(180)
    turtle.pendown()
    turtle.forward(5)
    turtle.right (45)
    turtle.forward(5)
    turtle.right(-90)
    turtle.goto (a,b+5)
    turtle.forward (5)
    turtle.right(45)
    turtle.penup ()
    turtle.goto(a,b+10)
    turtle.pendown()
    turtle.right (60)
    turtle.forward(10)
    turtle.goto(a-5/2*math.sqrt(3),b+10-5/2)
    turtle.right (45)
    turtle.forward(5)
    turtle.goto(a-5/2*math.sqrt(3),b+10-5/2)
    turtle.right(-90)
    turtle.forward (5)
    turtle.right(-15)
    turtle.penup ()
    turtle.goto(a,b+10)
    turtle.pendown()
    turtle.right(-60)
    turtle.forward (10)
    turtle.goto (a+5/2*math.sqrt(3),b+10-5/2)
    turtle.right(45)
    turtle.forward (5)
    turtle.goto (a+5/2*math.sqrt(3),b+10-5/2)
    turtle.right(-90)
    turtle.forward (5)
    turtle.right(-75)
