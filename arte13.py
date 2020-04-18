import turtle

myTurtle = turtle.Turtle()
myWindow = turtle.Screen()
colors = (
    "#006699",
    "#006666",
    "#660066",
    "#990000",
    "#ad3270",
    "#e65100",
    "#1a237e",
    "#827717",
    "#006064",
    "#f57f17",
    "#d50000",
    "#4a148c",
    )

def draw(myTurtle, length):
    if length > 0:
        myTurtle.forward(length)
        myTurtle.left(123)
        draw(myTurtle, length-2)

for color in colors:
    myTurtle.pencolor(color)
    draw(myTurtle, 100)
    myWindow.exitonclick()
