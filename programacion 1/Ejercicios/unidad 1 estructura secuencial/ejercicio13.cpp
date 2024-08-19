#include<iostream>
using namespace std;

int main(void) {
//Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.
//Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se deberán entregar 2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y 0 billetes de $100.
//Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0 billetes de $100.
//Ejemplo C: Si el importe a retirar es $300 se mostrará por pantalla que se deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0 billetes de $500.
//Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.


int importeaRetirar;
int billetesMil;
int billetesQuin;
int billetesDosc;
int billetesCien;
int nuevoImporte;



cout<<"ingrese el importe a retirar: $"<<endl;
cin>>importeaRetirar;

billetesMil = importeaRetirar / 1000;
nuevoImporte = importeaRetirar%1000;

billetesQuin = nuevoImporte / 500;
nuevoImporte = nuevoImporte%500;

billetesDosc = nuevoImporte / 200;
nuevoImporte = nuevoImporte %200;

billetesCien = nuevoImporte / 100;



cout<<"billetes $1.000: "<<billetesMil<<endl<<" billetes $500: "<<billetesQuin<<endl<<" billetes $200: "<<billetesDosc<<endl<<" billetes $100: "<<billetesCien<<endl;


return 0;

}
