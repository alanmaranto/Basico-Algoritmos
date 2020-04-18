import turtle

myTurtle = turtle.Turtle()
myWindow = turtle.Screen()


def draw(myTurtle, length):
    if length > 0:
        myTurtle.forward(length)
        myTurtle.left(300)
        draw(myTurtle, length-1)


draw(myTurtle, 100)
myWindow.exitonclick()
