#include "agregar_p.h"
#include "colors.h"
void agregarProducto(){
    cout << LGREEN<<"Ingrese el nombre del producto: ";
    cin.ignore();
    getline(cin, productos[cantidadProductos].nombre);
    cout << LGREEN<<"Ingrese el precio en promedio del producto: ";
    cin >> productos[cantidadProductos].precioPromedio;
    cantidadProductos++;
    cout << endl;
    cout << GREEN<<"Producto agregado"<< endl;
}

void eliminarProducto() {
    string nombre;
    cout <<LGREEN<< "Ingrese el nombre del producto a eliminar: ";
    cin >> nombre;

    for (int i = 0; i < cantidadProductos; ++i) {
        if (productos[i].nombre == nombre) {
            for (int j = i; j < cantidadProductos - 1; ++j) {
                productos[j] = productos[j + 1];
            }
            cantidadProductos--;
            cout << GREEN<<"Producto eliminado con éxito." << endl;
            return;
        }
    }

    cout <<RED<<"Producto no encontrado." << endl;
}

void actualizarProducto() {
    string nombreActualizar;
    cout <<LGREEN<< "Ingrese el nombre del producto a actualizar: ";
    cin.ignore();
    getline(cin, nombreActualizar);
    bool encontrado = false;
    for (int i = 0; i < cantidadProductos; i++) {
        if (productos[i].nombre == nombreActualizar) {
            cout << LGREEN<<"Ingrese el nuevo precio del producto: ";
            cin >> productos[i].precioPromedio;
            cout<<endl;
            cout << GREEN<<"Producto actualizado con éxito!" << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout <<RED<< "Producto no encontrado." << endl;
    }
}

