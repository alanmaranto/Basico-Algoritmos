import turtle

myTurtle = turtle.Turtle()
myWindow = turtle.Screen()


def draw(myTurtle, length):
    if length > 0:
        myTurtle.forward(length)
        myTurtle.left(75)
        draw(myTurtle, length-1)


draw(myTurtle, 100)
myWindow.exitonclick()
