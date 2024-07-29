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

void actualizarProducto() {
	string nombreActualizar;
    cout << "Ingrese el nombre del producto a actualizar: ";
    cin.ignore();
    getline(cin, nombreActualizar);
    bool encontrado = false;
    for (int i = 0; i < cantidadProductos; i++) {
        if (productos[i].nombre == nombreActualizar) {
            cout << "Ingrese el nuevo precio del producto: ";
            cin >> productos[i].precioPromedio;
            cout<<endl;
            cout << "Producto actualizado con éxito!" << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Producto no encontrado." << endl;
    }
}