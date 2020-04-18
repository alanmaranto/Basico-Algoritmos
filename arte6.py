import turtle

myTurtle = turtle.Turtle()
myWindow = turtle.Screen()


def draw(myTurtle, length):
    if length > 0:
        myTurtle.forward(length)
        myTurtle.left(150)
        draw(myTurtle, length-5)


draw(myTurtle, 500)
myWindow.exitonclick()
