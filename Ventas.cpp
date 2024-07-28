#include "venta_p.h"
#include "mostrar_p.h"
Venta ventas[100];
int cantidadVentas = 0;

void agregarVenta(){
	Venta nuevaVenta;
    cout << "Ingrese el nombre del producto vendido: ";
    cin.ignore();
    getline(cin, nuevaVenta.producto);
    cout << "Ingrese la cantidad vendida: ";
    cin >> nuevaVenta.cantidad;
    float precioProducto = 0;
    for (int i = 0; i < cantidadProductos; i++) {
        if (productos[i].nombre == nuevaVenta.producto) {
            precioProducto = productos[i].precioPromedio;
            break;
        }
    }
    if (precioProducto == 0) {
    	cout<<endl;
        cout << "Producto no encontrado." << endl;
        return;
    }
    nuevaVenta.precioTotal = precioProducto * nuevaVenta.cantidad;
    nuevaVenta.idVenta = cantidadVentas + 1;
    ventas[cantidadVentas] = nuevaVenta;
    cantidadVentas++;
    cout << "Venta agregada" << endl;
}
    