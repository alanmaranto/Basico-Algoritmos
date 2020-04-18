#include <stdio.h>
#include <string.h>

void revertir(char *cadena)
{
    unsigned int i = 0;
    char temp = '\0';
    unsigned int len = strlen(cadena);

    for (; i < len / 2; i++)
    {
        temp = cadena[i];
        cadena[i] = cadena[len - i - 1];
        cadena[len - i - 1] = temp;
    }
}

int main(int argc, char *argv[])
{
    char cadena[] = "Hola a todos";

    printf("%s\n", cadena);
    revertir(cadena);
    printf("%s\n", cadena);

    getchar();
    return 0;
}