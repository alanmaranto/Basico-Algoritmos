var values = [6, 4, 3, 11, 10]

const insertionSort = () => {
  for (let i = 1; i < values.length; i++) {
    let tmp = values[i];
    let j = i - 1;
    console.log(`nBefore: ${values} i= ${i} j= ${j}`)
    for (j; j >= 0 && values[j] > tmp; j--) {
      values[j + 1] = values[j];
    }
    values[j + 1] = tmp;
    console.log(`After: ${values} `);
  }
};
insertionSort(values);
console.log(insertionSort);
