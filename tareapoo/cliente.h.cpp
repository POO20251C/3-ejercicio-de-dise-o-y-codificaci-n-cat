//Juan Pablo Mena
//POO
//15/3/2025

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include "venta.h"
using namespace std;

class Cliente {
private:
    string cedula;
    string nombre;
    string direccion;
    vector<Venta*> compras;

public:
    Cliente(string ced, string nom, string dir);
    string getCedula();
    string getNombre();
    void agregarCompra(Venta* venta);
};

#endif  // CLIENTE_H