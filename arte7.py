import turtle

myTurtle = turtle.Turtle()
myTurtle.color("yellow")
myWindow = turtle.Screen()


def draw(myTurtle, length):
    if length > 0:
        myTurtle.forward(length/10)
        myTurtle.left(60)
        myTurtle.pensize(5)
        myTurtle.pencolor("orange")
        myTurtle.begin_fill()
        myTurtle.circle(length/4)
        myTurtle.pensize(2)
        myTurtle.pencolor("green")
        myTurtle.backward(length/2)
        myTurtle.end_fill()
        draw(myTurtle, length-10)


draw(myTurtle, 300)
myWindow.exitonclick()
