#ifndef MOSTRAR_P
#define MOSTRAR_P
#include <iostream>
#include <string>
using namespace std;
struct Producto{
    string nombre;
    float precioPromedio;
};

extern Producto productos[];
extern int cantidadProductos;

void inicializarProductos();
void verProductosAgregados();
void verProductosAgregadosAlf();
void verProductosAgregadosPrecio();

#endif 
