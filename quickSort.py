import time


def ordenar(not_ordened_list):
    if len(not_ordened_list) == 0:
        return []
    elif len(not_ordened_list) == 1:
        return not_ordened_list

    left = []
    right = []
    equals = []
    pivote = not_ordened_list[0]

    for n in not_ordened_list[1:]:
        if pivote > n:
            left.append(n)
        elif pivote < n:
            right.append(n)
        elif pivote == n:
            equals.append(n)

    return ordenar(left) + [pivote] + equals + ordenar(right)


if __name__ == '__main__':
    desafio_list = [
        3, 94, 86, 82, 90, 10, 87, 36, 61, 8, 17, 15, 22, 10, 23,
        78, 25, 2, 30, 45, 98, 43, 98, 59, 53, 57, 2, 64, 1, 41,
        32, 58, 19, 99, 60, 74, 48, 80, 44, 25, 68, 1, 89, 77, 60,
        25, 99, 30, 76, 32, 57, 82, 52, 44, 72, 87, 34, 87, 65, 30,
        54, 6, 31, 33, 44, 44, 42, 82, 90, 17, 9, 98, 28, 86, 69,
        3, 17, 8, 45, 98, 12, 47, 95, 43, 72, 39, 41, 82, 74, 56,
        65, 79, 50, 26, 67, 100, 24, 67, 38, 57]
    print("Desafio sort de Platzi")
    print('Lista desordenada:')
    print(desafio_list)
    print("contando tiempo y ordenando...")
    start_time = time.time()
    listaOrdenada = ordenar(desafio_list)
    elapsed_time = time.time() - start_time
    print("Lista ordenada en: ", elapsed_time, "s")
    print("Lista resultante:")
    print(listaOrdenada)
