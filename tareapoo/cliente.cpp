//Juan Pablo Mena
//POO
//15/3/2025

#include "cliente.h.cpp"

Cliente::Cliente(string ced, string nom, string dir) {
    cedula = ced;
    nombre = nom;
    direccion = dir;
}

string Cliente::getCedula() { return cedula; }
string Cliente::getNombre() { return nombre; }

void Cliente::agregarCompra(Venta* venta) {
    compras.push_back(venta);
}