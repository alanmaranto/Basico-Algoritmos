string = "Hola a todos"

print(string[::-1])

# Recursividad

def reverse_string(string):
    if not string:
        return string
    return reverse_string(string[1:]) + string[0]