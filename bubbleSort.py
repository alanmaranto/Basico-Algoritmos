import random


def cambiar_pos(x, y):

    temp = x
    n1 = y
    n2 = temp
    return n1, n2


def bubble_sort(array):
    n = len(array)

    for i in range(n):
        for j in range(n-i-1):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]


lista = [x for x in range(100)]
random.shuffle(lista)
print(lista)

bubble_sort(lista)
print(lista)
