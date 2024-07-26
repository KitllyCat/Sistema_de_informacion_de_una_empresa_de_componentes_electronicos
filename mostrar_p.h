#ifndef MOSTRAR_P
#define MOSTRAR_P
#include <iostream>
#include <string>
using namespace std;
struct Producto {
    string nombre;
    float precioPromedio;
};

extern Producto productos[];
extern int cantidadProductos;

void verProductosAgregados();

#endif 