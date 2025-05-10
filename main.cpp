#include <iostream>
#include <vector>
#include <Headers/Automovil.h>
#include <Headers/Moto.h>
#include <Headers/Bicicleta.h>
using namespace std;

int main() {
    vector<VehiculoElectrico*> vehiculos;
    int opcion;

    do {
        cout << "\n=== Gestion de Vehiculos Electricos ===\n";
        cout << "1. Registrar automovil\n";
        cout << "2. Registrar moto electrica\n";
        cout << "3. Registrar bicicleta electrica\n";
        cout << "4. Mostrar todos los vehiculos\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            string marca, modelo, traccion;
            int autonomia, puertas;
            double bateria;
            cout << "Marca: ";
            cin >> marca;
            cout << "Modelo: ";
            cin >> modelo;
            cout << "Autonomia: ";
            cin >> autonomia;
            cout << "Nivel bateria (%): ";
            cin >> bateria;
            cout << "Numero de puertas: ";
            cin >> puertas;
            cout << "Tipo de traccion: ";
            cin >> traccion;

            vehiculos.push_back(new Automovil(marca, modelo, autonomia, bateria, puertas, traccion));

        } else if (opcion == 2) {
            string marca, modelo, freno;
            int autonomia, cilindrada;
            double bateria;
            cout << "Marca: ";
            cin >> marca;
            cout << "Modelo: ";
            cin >> modelo;
            cout << "Autonomia: ";
            cin >> autonomia;
            cout << "Nivel bateria (%): ";
            cin >> bateria;
            cout << "Cilindrada electrica: ";
            cin >> cilindrada;
            cout << "Tipo de freno: ";
            cin >> freno;

            vehiculos.push_back(new Moto(marca, modelo, autonomia, bateria, cilindrada, freno));

        } else if (opcion == 3) {
            string marca, modelo, tipoBateria;
            int autonomia;
            double bateria;
            int asistenciaInt;
            bool asistencia;

            cout << "Marca: ";
            cin >> marca;
            cout << "Modelo: ";
            cin >> modelo;
            cout << "Autonomia: ";
            cin >> autonomia;
            cout << "Nivel bateria (%): ";
            cin >> bateria;
            cout << "Tipo de bateria: ";
            cin >> tipoBateria;
            cout << "¿Tiene asistencia al pedaleo? (1 = si, 0 = no): ";
            cin >> asistenciaInt;
            asistencia = asistenciaInt == 1;

            vehiculos.push_back(new Bicicleta(marca, modelo, autonomia, bateria, tipoBateria, asistencia));
        } else if (opcion == 4) {
            for (auto v : vehiculos) {
                v->mostrarInformacion();
                v->mostrarTipoCarga();
                cout << "---------------------\n";
            }
        }

    } while (opcion != 5);

    for (auto v : vehiculos)
        delete v;

    return 0;
}
