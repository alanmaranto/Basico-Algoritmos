#include <stdio.h>

void quickSort(int vectorEntrada[], int primerValor, int ultimoValor)
{
    int i, j, pivote, temp;

    if (primerValor < ultimoValor)
    {
        pivote = primerValor;
        i = primerValor;
        j = ultimoValor;

        while (i < j)
        {
            while (vectorEntrada[i] <= vectorEntrada[pivote] && i < ultimoValor)
                i++;
            while (vectorEntrada[j] > vectorEntrada[pivote])
                j--;
            if (i < j)
            {
                temp = vectorEntrada[i];
                vectorEntrada[i] = vectorEntrada[j];
                vectorEntrada[j] = temp;
            }
        }

        temp = vectorEntrada[pivote];
        vectorEntrada[pivote] = vectorEntrada[j];
        vectorEntrada[j] = temp;
        quickSort(vectorEntrada, primerValor, j - 1);
        quickSort(vectorEntrada, j + 1, ultimoValor);
    }
}

void printArray(int vectorEntrada[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ,", vectorEntrada[i]);
    }
    printf("\n Fin del ordenamiento");
}

int main(int argc, char const *argv[])
{
    int size = 101;
    int vectorEntrada[] = {3, 94, 86, 82, 90, 10, 87, 36, 61, 8, 17, 15, 22, 10, 23, 78, 25, 2, 30, 45, 98, 43, 98, 59, 53, 57, 2, 64, 1, 41,
                           32, 58, 19, 99, 60, 74, 48, 80, 44, 25, 68, 1, 89, 77, 60, 25, 99, 30, 76, 32, 57, 82, 52, 44, 72, 87, 34, 87, 65, 30,
                           54, 6, 31, 33, 44, 44, 42, 82, 90, 17, 9, 98, 28, 86, 69, 3, 17, 8, 45, 98, 12, 47, 95, 43, 72, 39, 41, 82, 74, 56,
                           65, 79, 50, 26, 67, 100, 24, 67, 38, 57};

    quickSort(vectorEntrada, 0, size);
    printArray(vectorEntrada, size);

    return 0;
}
