""" 1. Dividir dataset
2. Un punto pivotal (de aqui tomamos la particion de los datos es decir datos mayores de un lado y datos menores de otro)
3. Ordenar recursivamente cada mitad del arreglo """

def particion(arr, low, high):
    i = (low-1) """ indice de dodne comienza la parte mas pequeña"""
    pivot = arr[high]

    for j in range(low, high):
        if arr[j]<= pivot:
            i = i+1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i+1], arr[high] = arr[high],arr[i+1]
    return (i+1)

def quickSort(arr, low, high)
    if low < high:
        particionIndex = particion(arr, low ,high)
        quickSort(arr, low ,particionIndex) """ Ordeno los datos desde 0 a la mitad"""
        quickSort(arr, particionIndex+1, high) """ordeno los datos de la mitad hasta el final"""