// 1

const items = [5, 2, 4, 2, 100, 7, 1, 3, 50];

for (let i = 0; i < items.length - 1; i++) {
  for (let j = 0; j < items.length - i - 1; j++) {
    console.log(`Comparo ${items[j]} > ${items[j + 1]}`);
    if (items[j] > items[j + 1]) {
      console.log(`Cambio el ${items[j + 1]} por el ${items[j]}`);
      const element = items[j];
      items[j] = items[j + 1];
      items[j + 1] = element;
      console.log("\n");
    }
  }
  console.log("\n");
}

// 2

const series = [4, 6, 1, 1, 9, 4, 7];

function bubbleSort(array) {
  let n = array.length;
  console.log(n);

  for (let i = 0; i < n - 1; i++) {
    for (let j = 0; j < n - 1 - i; j++) {
      [array[j], array[j + 1]] = compare(array[j], array[j + 1]);
    }
  }
}
function compare(num1, num2) {
  console.log(num1, num2);
  if (num1 <= num2) {
    return [num1, num2];
  } else {
    return [num2, num1];
  }
}

console.log(bubbleSort([2, 1, 6, 5, 7, 3]));

// 3
function bubbleSort(sortedList = []) {
  const length = sortedList.length;

  for (let i = 0; i < length - 1; i++) {
    for (let j = 1; j < length - i; j++) {
      if (sortedList[j - 1] > sortedList[j]) {
        const swap = sortedList[j - 1];
        sortedList[j - 1] = sortedList[j];
        sortedList[j] = swap;
      }
    }
  }

  return sortedList;
}

function sort() {
  let list = [4, 2, 6, 8, 1, 5];
  console.log(`Unsorted List: ${list}`);
  // disordered List: 4,2,6,8,1,5
  console.log(`Sorted List: ${bubbleSort([...list])}`);
  // Sorted List: 1,2,4,5,6,8
}

sort();
