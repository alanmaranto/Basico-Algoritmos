#include <stdio.h>
#include <math.h>

// Función insertion sort
void insertionSort(int arr[], int n)
{
    int i, currentValue, j;
    for (i = 1; i < n; i++)
    {
        currentValue = arr[i]; //Obtenemos el valor actual a comparar
        j = i - 1;

        /* Mueve los elementos del arreglo arr[0...i-1], que son mayores que el valor de la posición actual del recorrido, 
        a una posición adelante de su posición actual */
        while (j >= 0 && arr[j] > currentValue)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = currentValue;
    }
}

// Funcion auxiliar para imprimir un array de tamaño n
void printArray(int arr[], int n)
{
    int i;
    for (i=0; i<n; i++)
    printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test insertion sort
int main()
{
    int arr[] = {6,4,3,11,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}