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

void eliminarProducto() {
    string nombre;
    cout << "Ingrese el nombre del producto a eliminar: ";
    cin >> nombre;

    for (int i = 0; i < cantidadProductos; ++i) {
        if (productos[i].nombre == nombre) {
            for (int j = i; j < cantidadProductos - 1; ++j) {
                productos[j] = productos[j + 1];
            }
            cantidadProductos--;
            cout << "Producto eliminado con éxito." << endl;
            return;
        }
    }

    cout << "Producto no encontrado." << endl;
}