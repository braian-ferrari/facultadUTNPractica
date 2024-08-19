#include<iostream>
using namespace std;

int main(void) {
//Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas. A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
//Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.

int A, B, C, D;

cout<< "ingrese el primer numero: "<<endl;
cin>> A;
cout<< "ingrese el segundo numero: "<<endl;
cin>> B;

C=B;
D=A;

cout<< "el primer numero es: " <<C<<endl;

cout<< "el segundo numero es: "<<D<<endl;

return 0;

}
