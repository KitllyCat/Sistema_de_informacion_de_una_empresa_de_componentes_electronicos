#include "agregar_p.h"
void agregarProducto(){
    cout << "Ingrese el nombre del producto: ";
    cin.ignore();
    getline(cin, productos[cantidadProductos].nombre);
    cout << "Ingrese el precio en promedio del producto: ";
    cin >> productos[cantidadProductos].precioPromedio;
    cantidadProductos++;
    cout << endl;
    cout << "Producto agregado"<< endl;
}
