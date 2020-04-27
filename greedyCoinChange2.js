function greedyCoins(deuda,i,billete,nb){
  if (deuda == 0){
    console.log ("pago completado");
    return 0
    }
  else{
    //mira si la deuda se puede pagar con el billete que se está viendo
    var pagoDisp = parseInt(deuda/billete[i]);
    if (pagoDisp > 0){
      //se paga la deuda
      var pagoRealizado = billete[i] * pagoDisp;
      //se entregan los billetes
      console.log(pagoRealizado);
      //se resta la cantidad entregada de la deuda
      deuda-=pagoRealizado;
    }
  }
  if (i<nb){
    i+=1;
    //recursividad:
    greedyCoins(deuda,i,billete,nb);
  }
  else{
    console.log("pago completado");
  }
}

let billete = [50,20,10,5,2,1];
var nb = 6;
var i = 0;
var deuda = 138;

greedyCoins(deuda,i,billete,nb)