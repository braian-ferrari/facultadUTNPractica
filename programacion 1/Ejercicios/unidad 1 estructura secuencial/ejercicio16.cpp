#include <iostream>
using namespace std;

int main() {
    // El Laboratorio V&V hace frascos de píldoras. Cada frasco contiene 75 píldoras y cada píldora contiene:
    // - 45 mg de Betamol
    // - 2 gramos de Micilina (convertido a mg)
    // - 7 mg de Ácido Sinítico
    // Este programa calcula la cantidad total de cada sustancia para una cantidad de frascos ingresada por el usuario.

    int cantidadDeFrascos;
    const int pastillasPorFrasco = 75;
    const int mgBetamolPorPildora = 45;
    const int mgAcidoSiniticoPorPildora = 7;
    const int grMicilinaPorPildora = 2;
    const int gramosAMiligramos = 1000;

    const int mgMicilinaPorPildora = grMicilinaPorPildora * gramosAMiligramos;


    cout << "Ingrese la cantidad de frascos pedidos: ";
    cin >> cantidadDeFrascos;


    int totalBetamol = cantidadDeFrascos * pastillasPorFrasco * mgBetamolPorPildora;
    int totalMicilina = cantidadDeFrascos * pastillasPorFrasco * mgMicilinaPorPildora;
    int totalAcidoSinitico = cantidadDeFrascos * pastillasPorFrasco * mgAcidoSiniticoPorPildora;


    cout << "Para elaborar " << cantidadDeFrascos << " frasco(s), se necesitan:" << endl;
    cout << totalBetamol << " mg de Betamol" << endl;
    cout << totalMicilina << " mg de Micilina" << endl;
    cout << totalAcidoSinitico << " mg de Ácido Sinítico" << endl;

    return 0;
}
