#ifndef MOTO_H
#define MOTO_H

#include "vehiculoelectrico.h"

class Moto : public VehiculoElectrico {
    int cilindrada;
    string tipoFreno;

public:
    Moto(string marca, string modelo, int autonomia, double nivelBateria,int cilindrada, string tipoFreno);

    void mostrarInformacion() const override;
    void mostrarTipoCarga() const override;
};

#endif // MOTO_H
