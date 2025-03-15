//Juan Pablo Mena
//POO
//15/3/2025

#include <iostream>
#include <string>
#include "tienda.h.cpp"
using namespace std;

int main() {
    Tienda tienda;

    Producto* prod1 = new Producto("P001", "Balón de Fútbol", 50.0, 10);
    Producto* prod2 = new Producto("P002", "Zapatillas", 150.0, 5);
    tienda.agregarProducto(prod1);
    tienda.agregarProducto(prod2);

    Cliente* cli = new Cliente("C001", "Juan Pérez", "Calle 123");
    tienda.agregarCliente(cli);

    int opcion;
    bool continuarEjecucion = true;
    
    while (continuarEjecucion) {
        cout << "\n=== Sistema de Gestión de Tienda Deportiva ===" << endl;
        cout << "1. Mostrar productos" << endl;
        cout << "2. Registrar venta" << endl;
        cout << "3. Mostrar compras de cliente" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                tienda.mostrarProductos();
                break;
            case 2: {
                string codigoVenta, cedula, codigoProd;
                int cantidad;
                cout << "Ingrese código de venta: ";
                cin >> codigoVenta;
                cout << "Ingrese cédula del cliente: ";
                cin >> cedula;
                cout << "Ingrese código del producto: ";
                cin >> codigoProd;
                cout << "Ingrese cantidad: ";
                cin >> cantidad;
                
                if (tienda.registrarVenta(codigoVenta, cedula, codigoProd, cantidad)) {
                    cout << "Venta registrada exitosamente" << endl;
                }
                break;
            }
            case 3: {
                string cedula;
                cout << "Ingrese cédula del cliente: ";
                cin >> cedula;
                tienda.mostrarComprasCliente(cedula);
                break;
            }
            case 4:
                cout << "¡Gracias por usar el sistema!" << endl;
                continuarEjecucion = false;
                break;
            default:
                cout << "Opción no válida" << endl;
        }
    }

    return 0;
}