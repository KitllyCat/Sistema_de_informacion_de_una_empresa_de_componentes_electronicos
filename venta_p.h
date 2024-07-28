#ifndef VENTA_P
#define VENTA_P
#include <iostream>
#include <string>
using namespace std;
struct Venta {
    int idVenta;
    string producto;
    int cantidad;
    float precioTotal;
};

extern Venta ventas[];
extern int cantidadVentas;

void agregarVenta();

#endif