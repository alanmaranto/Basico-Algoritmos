// CICLO
function contar(Num) {
  for (var i = Num; i >= 1; i--) {
    console.log(i);
  }
}
console.log(contar(5));

//RECURSIVIDAD
function contar(n) {
  if (n > 0) {
    console.log(n);
    contar(n - 1);
  }
}

console.log(contar(4));
