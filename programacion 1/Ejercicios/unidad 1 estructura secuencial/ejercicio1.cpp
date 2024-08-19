#include<iostream>
using namespace std;

int main(void) {

//Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

int horasTrabajadas;
int valorDeHora;
int sueldo;

cout<<"ingrese la cantidad de horas trabajadas: " <<endl;
cin>> horasTrabajadas;
cout<< "ingrese el valor de la hora: "<<endl;
cin>>valorDeHora;

sueldo = horasTrabajadas * valorDeHora;

cout<<"el sueldo es de: "<< sueldo<<endl;
return 0;

}
