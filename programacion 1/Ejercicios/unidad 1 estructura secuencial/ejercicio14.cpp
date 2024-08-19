#include<iostream>
using namespace std;

int main(void) {
//Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.
//Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
//Importe: 4500, Descuento: 1800, total: 2700.

int importeCompra;
int descuentoAplicar;
int descuentoAplicado;
int importeTotalAcobrar;

cout<<"ingrese el importe :$ ";
cin>>importeCompra;
cout<<"ingrese el descuento a aplicar:% ";
cin>>descuentoAplicar;

descuentoAplicado = descuentoAplicar * importeCompra /100;
importeTotalAcobrar = importeCompra - descuentoAplicado;


cout<<"el importe sin descuento es de:$ "<<importeCompra<<endl;
cout<<"el descuento aplicado es de:$ "<<descuentoAplicado<<endl;
cout<<"el importe total a cobrar es de:$ "<<importeTotalAcobrar;

return 0;

}
