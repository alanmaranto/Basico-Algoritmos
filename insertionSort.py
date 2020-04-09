def insertion_sort(numbers):
    n = len(numbers)

    for i in range(1, n):
        currentValue = numbers[i]
        j = i - 1

        while j >= 0 and numbers[j] > currentValue:
            numbers[j + 1] = numbers[j]
            j -= 1

        numbers[j + 1] = currentValue

    return numbers


if __name__ == "__main__":
    numbers = [6, 4, 3, 11, 10]
    print(numbers)
    orderedNumbers = insertion_sort(numbers)
    print(orderedNumbers)
