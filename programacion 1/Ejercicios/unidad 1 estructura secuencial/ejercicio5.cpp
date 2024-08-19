#include<iostream>
using namespace std;

int main(void) {
//Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
//Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
int Jorgito;
int guayma;
int fulbito;
float totalDeAlfajoresVendidos;
float PorcentajeJorgito;
float PorcentajeGuayma;
float PorcentajeFulbito;

cout<<"ingresa la cantidad de alfajores jorgito vendidos: "<<endl;
cin>> Jorgito;
cout<<"ingresa la cantidad de alfajores guaymallen vendidos: "<<endl;
cin>> guayma;
cout<<"ingresa la cantidad de alfajores fulbito vendidos: "<<endl;
cin>> fulbito;

totalDeAlfajoresVendidos = Jorgito + guayma + fulbito;

PorcentajeJorgito = Jorgito * 100 / totalDeAlfajoresVendidos;
PorcentajeGuayma = guayma * 100 / totalDeAlfajoresVendidos;

PorcentajeFulbito = fulbito * 100 / totalDeAlfajoresVendidos;

cout<<"El procentaje de jorgito es:% "<<PorcentajeJorgito<<endl;
cout<<"El procentaje de Guaymallen es:% "<<PorcentajeGuayma<<endl;
cout<<"El procentaje de Fulbito es:% "<<PorcentajeFulbito<<endl;





return 0;

}
