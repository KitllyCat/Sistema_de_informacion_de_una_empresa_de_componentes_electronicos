#include "mostrar_p.h"
Producto productos[100];
int cantidadProductos = 0;
void verProductosAgregados() {
    if (cantidadProductos == 0) {
        cout << endl;
        cout << "No hay productos agregados." << endl;
        return;
    }
    for (int i = 0; i < cantidadProductos; i++) {
        cout << endl;
        cout << "Producto N°" << i + 1 << ": " << productos[i].nombre << endl;
        cout << "----------------------------" << endl;
    }
}