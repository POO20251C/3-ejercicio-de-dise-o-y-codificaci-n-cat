//Juan Pablo Mena
//POO
//15/3/2025

#include "tienda.h.cpp"
#include <iostream>
using namespace std;

void Tienda::agregarProducto(Producto* prod) {
    productos[prod->getCodigo()] = prod;
}

void Tienda::agregarCliente(Cliente* cli) {
    clientes[cli->getCedula()] = cli;
}

bool Tienda::registrarVenta(string codigoVenta, string cedulaCliente, string codigoProducto, int cantidad) {
    bool continuar = true;
    
    if (clientes.find(cedulaCliente) == clientes.end()) {
        cout << "Error: Cliente no encontrado" << endl;
        continuar = false;
    }

    if (continuar && productos.find(codigoProducto) == productos.end()) {
        cout << "Error: Producto no encontrado" << endl;
        continuar = false;
    }

    if (continuar) {
        Producto* prod = productos[codigoProducto];
        if (prod->getExistencia() < cantidad) {
            cout << "Error: No hay suficiente existencia del producto" << endl;
            continuar = false;
        }
    }

    if (continuar) {
        double total = productos[codigoProducto]->getPrecio() * cantidad;
        Venta* venta = new Venta(codigoVenta, cedulaCliente, codigoProducto, cantidad, total, "2025-03-14");
        ventas[codigoVenta] = venta;

        productos[codigoProducto]->setExistencia(productos[codigoProducto]->getExistencia() - cantidad);

        clientes[cedulaCliente]->agregarCompra(venta);
    }

    return continuar;
}

void Tienda::mostrarProductos() {
    cout << "\nListado de Productos:" << endl;
    cout << "Código\tNombre\t\tPrecio\tExistencia" << endl;
    
    map<string, Producto*>::iterator prod;
    for (prod = productos.begin(); prod != productos.end(); prod++) {
        cout << prod->second->getCodigo() << "\t"
             << prod->second->getNombre() << "\t"
             << prod->second->getPrecio() << "\t"
             << prod->second->getExistencia() << endl;
    }
}

void Tienda::mostrarComprasCliente(string cedula) {
    bool clienteEncontrado = false;
    
    if (clientes.find(cedula) != clientes.end()) {
        Cliente* cli = clientes[cedula];
        cout << "\nCompras del cliente: " << cli->getNombre() << endl;
        cout << "Código Venta\tProducto\tCantidad\tTotal\tFecha" << endl;

        vector<Venta*>::iterator venta;
        for (venta = cli->getCompras().begin(); venta != cli->getCompras().end(); venta++) {
            cout << (*venta)->getCodigo() << "\t"
                 << (*venta)->getCodigoProducto() << "\t"
                 << (*venta)->getCantidad() << "\t"
                 << (*venta)->getTotal() << "\t"
                 << (*venta)->getFecha() << endl;
        }
        clienteEncontrado = true;
    }

    if (!clienteEncontrado) {
        cout << "Error: Cliente no encontrado" << endl;
    }
}