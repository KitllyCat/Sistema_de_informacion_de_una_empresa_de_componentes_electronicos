#include "mostrar_p.h"
#include "colors.h"

Producto productos[100];
int cantidadProductos = 0;

void verProductosAgregados() {

    if (cantidadProductos == 0) {
        cout << endl;
        cout << RED << "No hay productos agregados." << endl;
        return;
    }
    for (int i = 0; i < cantidadProductos; i++) {
        cout << endl;
        cout << BLUE<<"Producto N°" <<LBLUE<< i + 1 <<BLUE<< ": " << GREEN<< productos[i].nombre << endl;
        cout << GRAY<< "----------------------------" << endl;
    }
}

void verProductosAgregadosAlf() {

    if (cantidadProductos == 0) {
        cout << endl;
        cout << RED<<"No hay productos agregados." << endl;
        return;
    }
    Producto productosOrdenados[100];
    for (int i = 0; i < cantidadProductos; i++) {
        productosOrdenados[i] = productos[i];
    }
    for (int i = 0; i < cantidadProductos - 1; i++) {
        for (int j = 0; j < cantidadProductos - i - 1; j++) {
            if (productosOrdenados[j].nombre > productosOrdenados[j + 1].nombre) {
                Producto temp = productosOrdenados[j];
                productosOrdenados[j] = productosOrdenados[j + 1];
                productosOrdenados[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < cantidadProductos; i++) {
        cout << endl;
        cout << BLUE<<"Producto N°" <<LBLUE<< i + 1 << BLUE<<": " <<GREEN<< productosOrdenados[i].nombre << endl;
        cout << GRAY<< "----------------------------" << endl;
    }
}

void verProductosAgregadosPrecio() {

    if (cantidadProductos == 0) {
        cout << endl;
        cout << RED <<"No hay productos agregados." << endl;
        return;
    }
    
    Producto productosOrdenados[100];
    for (int i = 0; i < cantidadProductos; i++) {
        productosOrdenados[i] = productos[i];
    }

    for (int i = 0; i < cantidadProductos - 1; i++) {
        for (int j = 0; j < cantidadProductos - i - 1; j++) {
            if (productosOrdenados[j].precioPromedio > productosOrdenados[j + 1].precioPromedio) {
                Producto temp = productosOrdenados[j];
                productosOrdenados[j] = productosOrdenados[j + 1];
                productosOrdenados[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < cantidadProductos; i++) {
        cout << endl;
        cout << BLUE<<"Producto N°" <<LBLUE<< i + 1 <<BLUE<< ": " <<GREEN<< productosOrdenados[i].nombre << endl;
        cout << LGREEN<<"Precio Promedio: " << GREEN<< productosOrdenados[i].precioPromedio << endl;
        cout << GRAY<<"----------------------------" << endl;
    }
}