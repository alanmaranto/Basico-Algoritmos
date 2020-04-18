import turtle

myWindow = turtle.Screen()
turtle.speed(2)

for i in range(100):
    turtle.circle(5*i)
    turtle.circle(-5)
    turtle.left(i)

turtle.exitonclick()
