#include <Headers/Bicicleta.h>

Bicicleta::Bicicleta(string marca, string modelo, int autonomia, double nivelBateria, string tipoBateria, bool asistenciaPedaleo)
    : VehiculoElectrico(marca, modelo, autonomia, nivelBateria),
    tipoBateria(tipoBateria), asistenciaPedaleo(asistenciaPedaleo) {}

void Bicicleta::mostrarInformacion() const {
    VehiculoElectrico::mostrarInformacion();
    cout << "Bateria: " << tipoBateria<< ", Asistencia al pedaleo: " << (asistenciaPedaleo ? "Si" : "No") <<endl;
}

void Bicicleta::mostrarTipoCarga() const {
    cout << "Tipo de carga: Panel solar\n";
}
