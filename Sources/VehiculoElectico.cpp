#include <Headers/VehiculoElectrico.h>

VehiculoElectrico::VehiculoElectrico(string marca, string modelo, int autonomia, double nivelBateria)
    : marca(marca), modelo(modelo), autonomia(autonomia), nivelBateria(nivelBateria) {}

string VehiculoElectrico::getMarca() const { return marca; }
string VehiculoElectrico::getModelo() const { return modelo; }
int VehiculoElectrico::getAutonomia() const { return autonomia; }
double VehiculoElectrico::getNivelBateria() const { return nivelBateria; }

void VehiculoElectrico::setMarca(const string& m) { marca = m; }
void VehiculoElectrico::setModelo(const string& m) { modelo = m; }
void VehiculoElectrico::setAutonomia(int a) { autonomia = a; }
void VehiculoElectrico::setNivelBateria(double n) { nivelBateria = n; }

void VehiculoElectrico::mostrarInformacion() const {
    cout << "Marca: " << marca<< ", Modelo: " << modelo<< ", Autonomia: " << autonomia << " km"
         << ", Nivel de bateria: " << nivelBateria << "%" <<endl;
}
