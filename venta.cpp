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

void verVentasAgregadas(){
	if (cantidadVentas == 0) {
     	cout<<endl;   	
        cout << "No hay ventas registradas." << endl;
        return;
    }
    cout << "Listado de ventas:" << endl;
    for (int i = 0; i < cantidadVentas; i++) {
        cout << "Venta " << ventas[i].idVenta << ":" << endl;
        cout << "Producto: " << ventas[i].producto << endl;
        cout << "Cantidad: " << ventas[i].cantidad << endl;
        cout << "Precio total: " << ventas[i].precioTotal << endl;
        cout << "------------------------" << endl;
    }
}    

void verVentasAgregadasPrecio(){
	if (cantidadVentas == 0) {
        cout << endl;
        cout << "No hay ventas agregadas." << endl;
        return;
    }
    
    Venta ventasOrdenadas[100];
    for (int i = 0; i < cantidadVentas; i++) {
        ventasOrdenadas[i] = ventas[i];
    }

    for (int i = 0; i < cantidadVentas - 1; i++) {
        for (int j = 0; j < cantidadVentas - i - 1; j++) {
            if (ventasOrdenadas[j].precioTotal > ventasOrdenadas[j + 1].precioTotal) {
                Venta temp = ventasOrdenadas[j];
                ventasOrdenadas[j] = ventasOrdenadas[j + 1];
                ventasOrdenadas[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < cantidadVentas; i++) {
        cout << endl;
        cout << "Venta " << i + 1 << ": " << ventasOrdenadas[i].producto << endl;
        cout << "Precio total: " << ventasOrdenadas[i].precioTotal << endl;
        cout << "----------------------------" << endl;
    }
}