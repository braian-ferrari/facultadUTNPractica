#include<iostream>
using namespace std;

int main(void) {
//Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importe a pagar.
//Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar será de $1020.
//Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar será de $800.


int importeVenta;
float descuento;
float importeDescuento;
float totalPagar;

cout<<"Ingrese el importe de la venta: "<<endl;
cin>> importeVenta;
cout<<"Ingrese el descuento: "<<endl;
cin>> descuento;

importeDescuento = descuento*importeVenta/100;
totalPagar = importeVenta - importeDescuento;

cout<< "El total a pagar es de:$ "<<totalPagar<<endl;


return 0;

}
