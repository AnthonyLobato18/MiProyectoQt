#ifndef BICICLETA_H
#define BICICLETA_H

#include "vehiculoelectrico.h"

class Bicicleta : public VehiculoElectrico {
    string tipoBateria;
    bool asistenciaPedaleo;

public:
    Bicicleta(string marca, string modelo, int autonomia, double nivelBateria, string tipoBateria, bool asistenciaPedaleo);

    void mostrarInformacion() const override;
    void mostrarTipoCarga() const override;
};

#endif // BICICLETA_H
