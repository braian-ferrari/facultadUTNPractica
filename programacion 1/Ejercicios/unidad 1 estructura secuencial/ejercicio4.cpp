#include<iostream>
using namespace std;

int main(void) {
//Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
//Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.

int cantAsientosTotalesAvion;
int cantPasajesOcupados;
int porcentajeDeOcupacion;
int porcentajeDeNoOcupacion;

cout<<"Ingrese la cantidad de asientos totales del avion:" <<endl;
cin>>cantAsientosTotalesAvion;
cout<<"Ingrese la cantidad de pasajes ocupados:" <<endl;
cin>>cantPasajesOcupados;

porcentajeDeOcupacion = cantPasajesOcupados*100/cantAsientosTotalesAvion;
porcentajeDeNoOcupacion = 100-porcentajeDeOcupacion ;

cout<<"El procentaje de ocupacion es del:%"<<porcentajeDeOcupacion<<endl;
cout<<"El procentaje de no ocupacion es del:%"<<porcentajeDeNoOcupacion<<endl;

return 0;

}
