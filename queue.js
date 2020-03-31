const size = 5;
const arr = [];
let clients = 0;

function enQueue() {
  if (arr.length >= size) {
    console.log("El Queue está lleno!");
  } else {
    clients++;
    arr.push(clients);
  }
}

function deQueue() {
  if (arr.length) {
    arr.pop();
  }
}

// Pruebas
enQueue(2);
enQueue(5);
enQueue(6);
deQueue(2);

// 2

const SIZE = 5;
let rear = -1, front = -1, show = ""
let values = new Array(SIZE)

function Show() {
  values.forEach(value => {
    show += " " + value;
  });
  console.log(`---`);
  console.log(`Array = ${show}`);
  console.log(`Front = ${front} Rear = ${rear}`);
  console.log(`---`);
  show = ""
}
Show();

function enQueue(val) {
  if (rear == SIZE - 1) {
    console.log(`${val} can not be inserted - Queue is full`);
  }
  else {
    if (front == -1) {
      front = 0;
    }
    rear++
    values[rear] = val
    console.log(`${val} was inserted in ${values.indexOf(val)} position`);
  }
}

function deQueue() {
  if (front == -1) {
    console.log(`Queue is empty`);
  } 
  else {
    console.log(`Value ${values[front]} deleted`);
    for(let i=0; i < SIZE-1; i++){
      values[i] = values[i+1]
    }
    values[values.length-1] = undefined
    rear--
    if (front > rear) {
      front = rear = -1
      console.log("The las item was deleted");
    }
  }
}

enQueue(1);
enQueue(2);
enQueue(3);
enQueue(4);
enQueue(5);
Show();
deQueue()
deQueue()
Show();
enQueue(6);
enQueue(7);
Show();
enQueue(8);
Show();
deQueue()
deQueue()
deQueue()
deQueue()
deQueue()
deQueue()
Show()