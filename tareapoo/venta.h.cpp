//Juan Pablo Mena
//POO
//15/3/2025

#ifndef VENTA_H
#define VENTA_H

#include <string>
using namespace std;

class Venta {
private:
    string codigo;
    string cedulaCliente;
    string codigoProducto;
    int cantidad;
    double total;
    string fecha;

public:
    Venta(string cod, string cedCli, string codPro, int cant, double tot, string fec);
    string getCodigo();
    string getCedulaCliente();
    string getCodigoProducto();
    int getCantidad();
    double getTotal();
    string getFecha();
};

#endif  // VENTA_H