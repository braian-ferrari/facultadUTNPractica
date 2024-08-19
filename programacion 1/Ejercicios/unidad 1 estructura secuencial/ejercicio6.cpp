#include<iostream>
using namespace std;

int main(void) {
//Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes. El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
//Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.

int recaudacionSemanaUno;
int recaudacionSemanaDos;
int recaudacionSemanaTres;
int recaudacionSemanaCuatro;
int recaudacionPromedioPorSemana;
int porcentajeRecaudacionUno;
int porcentajeRecaudacionDos;
int porcentajeRecaudacionTres;
int porcentajeRecaudacionCuatro;
int recaudacionTotalMensual;

cout<<"Ingrese la recaudacion de la primer semana: "<<endl;
cin>>recaudacionSemanaUno;
cout<<"Ingrese la recaudacion de la segunda semana: "<<endl;
cin>>recaudacionSemanaDos;
cout<<"Ingrese la recaudacion de la tercer semana: "<<endl;
cin>>recaudacionSemanaTres;
cout<<"Ingrese la recaudacion de la cuarta semana: "<<endl;
cin>>recaudacionSemanaCuatro;

recaudacionTotalMensual = recaudacionSemanaUno + recaudacionSemanaDos + recaudacionSemanaTres + recaudacionSemanaCuatro;
recaudacionPromedioPorSemana = recaudacionTotalMensual / 4;

porcentajeRecaudacionUno = recaudacionSemanaUno * 100 / recaudacionTotalMensual;
porcentajeRecaudacionDos = recaudacionSemanaDos * 100 / recaudacionTotalMensual;
porcentajeRecaudacionTres = recaudacionSemanaTres * 100 / recaudacionTotalMensual;
porcentajeRecaudacionCuatro = recaudacionSemanaCuatro * 100 / recaudacionTotalMensual;

cout<<"La recaudacion promedio por semana fue de:$ " << recaudacionPromedioPorSemana<<endl;

cout<<"Porcentaje de recaudacion semana uno:% " << porcentajeRecaudacionUno<<endl;
cout<<"Porcentaje de recaudacion semana dos:% " << porcentajeRecaudacionDos<<endl;
cout<<"Porcentaje de recaudacion semana tres:% " <<porcentajeRecaudacionTres <<endl;
cout<<"Porcentaje de recaudacion semana cuatro:% " << porcentajeRecaudacionCuatro<<endl;



return 0;

}
