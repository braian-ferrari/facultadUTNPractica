#include<iostream>
using namespace std;

int main(void) {
//Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cu�ntos d�as, horas y minutos equivalen.
//Ejemplo A: si se ingresan 1520 minutos el programa mostrar� por pantalla que equivalen a 1 d�a, 1 hora y 20 minutos.
//Ejemplo B: si se ingresan 480 minutos el programa mostrar� por pantalla que equivalen a 0 d�a, 8 horas y 0 minutos.

int MinutosIngresados;
int dia =1440;
int hora = 60;
int diasE;
int horasE;
int restoMin;

cout<<"ingrese la cantidad de minutos: "<<endl;
cin>>MinutosIngresados;
diasE = MinutosIngresados / dia;
horasE = (MinutosIngresados % dia) / 60;
restoMin = MinutosIngresados % hora ;

cout<<"Equivalen a: "<<diasE<<" dias  "<<horasE<<" horas "<<restoMin<<" minutos "<<endl;


return 0;

}
