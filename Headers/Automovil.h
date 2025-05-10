#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include "vehiculoelectrico.h"

class Automovil : public VehiculoElectrico {
    int numPuertas;
    string tipoTraccion;

public:
    Automovil(string marca, string modelo, int autonomia, double nivelBateria,int numPuertas, string tipoTraccion);

    void mostrarInformacion() const override;
    void mostrarTipoCarga() const override;
};

#endif // AUTOMOVIL_H
