// Ciclo
const reverse = (str) => {
  let result = "";
  for (let i = str.length - 1; i >= 0; i--) {
    result += str[i];
  }
  console.log(result);
  return result;
};

console.log(reverse("hey dodne estas"));

// Recursividad
const reverse = (str) =>
  str.length
    ? str.substring(str.length - 1) + reverse(str.substring(0, str.length - 1))
    : "";
console.log(reverse("hola a todos"));
