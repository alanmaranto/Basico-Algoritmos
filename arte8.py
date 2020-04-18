import turtle

myTurtle = turtle.Turtle()
myWindow = turtle.Screen()


def draw(myTurtle, length):
    if length > 40:
        myTurtle.forward(length)
        myTurtle.left(145)
        draw(myTurtle, length-3)


draw(myTurtle, 300)
myWindow.exitonclick()
