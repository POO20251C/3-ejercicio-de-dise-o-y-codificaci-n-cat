//Juan Pablo Mena
//POO
//15/3/2025

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto {
private:
    string codigo;
    string nombre;
    double precio;
    int existencia;

public:
    Producto(string cod, string nom, double pre, int exi);
    string getCodigo();
    string getNombre();
    double getPrecio();
    int getExistencia();
    void setExistencia(int nuevaExistencia);
};

#endif  // PRODUCTO_H