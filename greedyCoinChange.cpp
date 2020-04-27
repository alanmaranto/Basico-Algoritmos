/* 1. Buscaremos el mínimo de monedas posible para obtener el cambio total tomando monedas del set de monedas “coinset”
2. Necesitamos un auxiliar “res” para que cada moneda funcione como stack recursivo
3. Crear una función recursiva para encontrar el valor, haciendo iteraciones hasta que encuentre cuál es el billete que va a utilizar
4. Retornar las monedas necesarias para el cambio */

#include <iostream>
#include <climits>

using namespace std;

int greedyChange(int coinSet[], int lenCoinSet, int money)
{
    if (money == 0)
        return 0;
    if (money < 0)
        return INT_MAX;

    int coins = INT_MAX;
    // Recorremos todo el set de monedas AKA opciones para dar cambio
    for (int i = 0; i < lenCoinSet; i++)
    {
        int result = greedyChange(coinSet, lenCoinSet, money - coinSet[i]);
        if (result != INT_MAX)
            coins = min(coins, result + 1);
    }

    return coins;
}

int main(int argc, char const *argv[])
{
    int coinSet[] = {1, 5, 10, 15, 20};
    int lenCoinSet = sizeof(coinSet) / sizeof(coinSet[0]);

    int money = 27;

    cout << "El minimo de monedas para dar cambio es: "
         << greedyChange(coinSet, lenCoinSet, money);
    return 0;
}