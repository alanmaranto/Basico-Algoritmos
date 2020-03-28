/* 1 - Crear pointer para saber que hay en front y rear
2 - colocar estos valores en -1 al inicializar
3 - incrementar en 1 el valor de "rear"
    cuando agreguemos un elemento
4 - Retornar el valor de front al quitar un elemento
    e incrementar en 1 el valor de
    front al usar dequeue,
5.- antes de agregar un elemento revisar si hay espacio
6.- antes de remover un elemento revisamos que existan elementos
7.- asegurarnos de que al remover todos los elementos
    resetear nuestro front y rear a -1
    y agregar el valor de 0 a Front al hacer nuestro primer enqueue

 */

#include <stdio.h>
#define SIZE 5
int values[SIZE], front = -1, rear = -1;

void enQueue(int value)
{                         // void debido a que la función no retorna nada
    if (rear == SIZE - 1) // Revisamos que no esté lleno
        printf("Queue está lleno\n");
    else
    {
        if (front == -1) // Revisamos que no sea la primera vez que se agrega algo al queue
            front = 0;
        rear++;
        values[rear] = value; // Asigna nuevo valor al array (posición que corresponde en el momento)
        printf("Se insertó el valor %d correctamente\n", value);
    }
}

void deQueue()
{
    if (front == -1)
    {
        printf("El queue está vacío. \n");
    }
    else
    {
        printf("Se eliminó el valor %d \n", values[front]);
    }

    for (int i = 0; i < rear + 1; i++)
    {
        values[i] = values[i + 1];
    }
    rear--;
    if (rear == -1)
    {
        front = -1;
    }
}

main(int argc, char const *argv[])
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    enQueue(10);
    return 0;
}