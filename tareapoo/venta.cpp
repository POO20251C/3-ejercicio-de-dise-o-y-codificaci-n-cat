//Juan Pablo Mena
//POO
//15/3/2025

#include "venta.h.cpp"

Venta::Venta(string cod, string cedCli, string codPro, int cant, double tot, string fec) {
    codigo = cod;
    cedulaCliente = cedCli;
    codigoProducto = codPro;
    cantidad = cant;
    total = tot;
    fecha = fec;
}

string Venta::getCodigo() { return codigo; }
string Venta::getCedulaCliente() { return cedulaCliente; }
string Venta::getCodigoProducto() { return codigoProducto; }
int Venta::getCantidad() { return cantidad; }
double Venta::getTotal() { return total; }
string Venta::getFecha() { return fecha; }