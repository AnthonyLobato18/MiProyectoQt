#ifndef VEHICULOELECTRICO_H
#define VEHICULOELECTRICO_H

#include <string>
#include <iostream>

using namespace std;

class VehiculoElectrico {
protected:
    string marca, modelo;
    int autonomia;
    double nivelBateria;

public:
    VehiculoElectrico(string marca, string modelo, int autonomia, double nivelBateria);
    virtual ~VehiculoElectrico() {}

    string getMarca() const;
    string getModelo() const;
    int getAutonomia() const;
    double getNivelBateria() const;

    void setMarca(const string& m);
    void setModelo(const string& m);
    void setAutonomia(int a);
    void setNivelBateria(double n);

    virtual void mostrarInformacion() const;
    virtual void mostrarTipoCarga() const = 0;
};

#endif // VEHICULOELECTRICO_H
