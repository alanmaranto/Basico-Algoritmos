/* 1. - Comenzamos a hacer la comparación de elementos adyacentes
2. - Repetimos hasta tener una pasada completa sin ningún swap */

#include <stdio.h>

void changePosition(int *n1, int *n2) // Declarando punteros: una variable que guarda la dirección de memoria de otra variable
{
    int temporal = *n1; // ayuda a almacenar un momento de tiempo durante el cambio
    *n1 = *n2;
    *n2 = temporal;
}

void bubbleSort(int entry_vector[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++) // Estamos en la celda correcta
        {
            // [10,5,3,3]
            if (entry_vector[j] > entry_vector[j + 1]) // Obtenemos el numero de la primera celda y lo comparamos con el valor de la siguiente celda
            {
                changePosition(&entry_vector[j], &entry_vector[j + 1]);
            }
        }
    }
}

int print_array(int entry_vector[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d  ,", entry_vector[i]);
    printf("\n Fin del ordenamiento");
}

main(int argc, char const *argv[])
{
    int entry_vector[] = {100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    // me da el tamaño de bites de mi variable y lo dividimos entre el tamaño de un dato en ese vector
    int n = sizeof(entry_vector) / sizeof(entry_vector[0]);// total de datos que tengo en el array
    bubbleSort(entry_vector, n);
    print_array(entry_vector, n);
    printf("\n");
    return 0;
}

// BubbleSort mayor a menor

/* 1. - Comenzamos a hacer la comparación de elementos adyacentes
2. - Repetimos hasta tener una pasada completa sin ningún swap */

#include <stdio.h>

void changePosition(int *n1, int *n2) // Declarando punteros: una variable que guarda la dirección de memoria de otra variable
{
    int temporal = *n1; // ayuda a almacenar un momento de tiempo durante el cambio
    *n1 = *n2;
    *n2 = temporal;
}

void bubbleSort(int entry_vector[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++) // Estamos en la celda correcta
        {
            // [10,5,3,3]
            if (entry_vector[j] < entry_vector[j + 1]) // Obtenemos el numero de la primera celda y lo comparamos con el valor de la siguiente celda
            {
                changePosition(&entry_vector[j], &entry_vector[j + 1]);
            }
        }
    }
}

int print_array(int entry_vector[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d  ,", entry_vector[i]);
    printf("\n Fin del ordenamiento");
}

main(int argc, char const *argv[])
{
    int entry_vector[] = {100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    // me da el tamaño de bites de mi variable y lo dividimos entre el tamaño de un dato en ese vector
    int n = sizeof(entry_vector) / sizeof(entry_vector[0]);// total de datos que tengo en el array
    bubbleSort(entry_vector, n);
    print_array(entry_vector, n);
    printf("\n");
    return 0;
}