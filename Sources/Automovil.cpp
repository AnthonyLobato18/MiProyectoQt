#include <Headers/Automovil.h>

Automovil::Automovil(string marca, string modelo, int autonomia, double nivelBateria,int numPuertas, string tipoTraccion)
    : VehiculoElectrico(marca, modelo, autonomia, nivelBateria),
    numPuertas(numPuertas), tipoTraccion(tipoTraccion) {}

void Automovil::mostrarInformacion() const {
    VehiculoElectrico::mostrarInformacion();
    cout << "Puertas: " << numPuertas<< ", Traccion: " << tipoTraccion <<endl;
}

void Automovil::mostrarTipoCarga() const {
    cout << "Tipo de carga: Rapida\n";
}
