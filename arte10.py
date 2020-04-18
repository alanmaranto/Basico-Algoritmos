import turtle

myTurtle = turtle.Turtle()
myWindow = turtle.Screen()


def draw(myTurtle, length):
    if length > 0:
        myTurtle.forward(length)
        myTurtle.right(60)
        myTurtle.left(-60)
        draw(myTurtle, length-2)


draw(myTurtle, 100)
myWindow.exitonclick()
