import turtle
import random

myTurtle = turtle.Turtle()
myWindow = turtle.Screen()
myTurtle.speed(0)
angle = 150
totalLength = 500
steps = 5
colors = ["maroon", "rosy brown", "dodger blue", 
"orange", "dark turquoise", "dark orchid", "maroon", "sea green", "blue violet", "navy"]

def draw(myTurtle, length):
    if length > 0:
        myTurtle.color(random.choice(colors))
        myTurtle.forward(length)
        myTurtle.left(angle)
        draw(myTurtle, length-steps)


draw(myTurtle, totalLength)
myWindow.exitonclick()
