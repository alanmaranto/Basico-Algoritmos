let cadena = 'Aprendiendo algoritmos';

// Con elsplit('') convierto la cadena en un array separando la cadena caracter por caracter
// Con el metodo reversese puede invertir un array, ya que la cadena es un array, puedo utilizar dicho metodo 
// Y conel metodo join('') puedo unir todas las posiciones del array enuna cadena, teniendo asi la misma cadena pero al reves
let cadena_al_reves = cadena.split('').reverse().join('');
console.log(cadena_al_reves)