//Juan Pablo Mena
//POO
//15/3/2025

#include "producto.h.cpp"

Producto::Producto(string cod, string nom, double pre, int exi) {
    codigo = cod;
    nombre = nom;
    precio = pre;
    existencia = exi;
}

string Producto::getCodigo() { return codigo; }
string Producto::getNombre() { return nombre; }
double Producto::getPrecio() { return precio; }
int Producto::getExistencia() { return existencia; }

void Producto::setExistencia(int nuevaExistencia) {
    existencia = nuevaExistencia;
}