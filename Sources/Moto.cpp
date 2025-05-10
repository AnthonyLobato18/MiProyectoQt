#include <Headers/Moto.h>

Moto::Moto(string marca, string modelo, int autonomia, double nivelBateria,int cilindrada, string tipoFreno)
    : VehiculoElectrico(marca, modelo, autonomia, nivelBateria),
    cilindrada(cilindrada), tipoFreno(tipoFreno) {}

void Moto::mostrarInformacion() const {
    VehiculoElectrico::mostrarInformacion();
    cout << "Cilindrada electrica: " << cilindrada<< " cc, Freno: " << tipoFreno <<endl;
}

void Moto::mostrarTipoCarga() const {
    cout << "Tipo de carga: Estandar\n";
}
