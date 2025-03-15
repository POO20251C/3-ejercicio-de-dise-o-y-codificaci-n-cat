//Juan Pablo Mena
//POO
//15/3/2025

#ifndef TIENDA_H
#define TIENDA_H

#include <string>
#include <map>
#include "producto.h"
#include "cliente.h"
#include "venta.h"
using namespace std;

class Tienda {
private:
    map<string, Producto*> productos;
    map<string, Cliente*> clientes;
    map<string, Venta*> ventas;

public:
    void agregarProducto(Producto* prod);
    void agregarCliente(Cliente* cli);
    bool registrarVenta(string codigoVenta, string cedulaCliente, string codigoProducto, int cantidad);
    void mostrarProductos();
    void mostrarComprasCliente(string cedula);
};

#endif  // TIENDA_H