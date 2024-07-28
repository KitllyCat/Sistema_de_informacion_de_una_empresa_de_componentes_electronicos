#include <iostream>
#include <windows.h> //libreria para las tildes
#include "menusuario.h" //esta es la libreria que se usa para la funciones del menu
#include "recomendacion.h" //esta libreria es de las recomenciones y su almacen
using namespace std;

char opcionPrincipal, opcionBaseDeDatos, opcionUsuario;

void mostrarMenuPrincipal(){
    cout << "----- \"N-Tek\" -----" << endl;
    cout << "Bienvenido al menú principal, seleccione si es un usuario o si desea acceder a la base de datos: " << endl;
    cout << "(A) Soy un usuario" << endl;
    cout << "(B) Deseo modificar la base de datos (empleado)" << endl;
    cout << "(C) Salir" << endl;
    cout << "Seleccione su opción: ";
    cin >> opcionPrincipal;
    cout << endl;
}

void mostrarMenuBaseDeDatos(){
    do {
        cout << "----- \"N-Tek\" -----" << endl;
        cout << "Bienvenido a la base de datos de N-Tek, seleccione la opción de la operación que desea realizar en el programa: " << endl;
        cout << "(A) Ver todos los productos registrados" << endl;
        cout << "(B) Ver todos los productos ordenados alfabéticamente" << endl;
        cout << "(C) Ver todos los productos ordenados por su precio" << endl;
        cout << "(D) Agregar un nuevo producto" << endl;
        cout << "(E) Eliminar un producto" << endl;
        cout << "(F) Actualizar los datos existentes" << endl;
        cout << "(G) Añadir una nueva venta" << endl;
        cout << "(H) Mostrar las ventas realizadas" << endl;
        cout << "(I) Mostrar las ventas ordenadas por el precio" << endl;
        cout << "(J) Ver las recomendaciones de los usuarios" << endl;
        cout << "(K) Regresar al menú principal" << endl;
        cout << "(L) Salir" << endl;
        cout << "Seleccione su opción: ";
        cin >> opcionBaseDeDatos;
        cout << endl;

        switch (opcionBaseDeDatos){
            case 'A': 
                //Añadir funcion para ver losproductos registrados 
                break;
            case 'B':
                //Añadir funcion para ver los productos ordenados alfabéticamente
                break;
            case 'C':
                //Añadir funcion para ver los productos ordenados por su precio
                break;
            case 'D':
                //Añadir funcion para agregar un nuevo producto
                break;
            case 'E':
                //Añadir funcion para eliminar un producto
                break;
            case 'F':
                //Añadir funcion para actualizar los datos existentes
                break;
            case 'G':
                //Añadir funcion para añadir una nueva venta
                break;
            case 'H':
                //Añadir funcion para mostrar las ventas realizadas
                break;
            case 'I':
                //Añadir funcion para mostrar las ventas ordenadas por el precio
                break;
            case 'J':
                mostrarRecomendacion();
                break;
            case 'K':
                cout << "Regresando al menú principal..." << endl;
                return;
            case 'L':
                cout << "Saliendo del programa, gracias por su visita..." << endl;
                exit(0);
            default:
                cout << "Opción inválida. Ingrese correctamente o intente de nuevo" << endl;
                break;
        }
        cout << endl;
    }while (true);
}

void mostrarMenuUsuario(){
    do{
        cout << "----- \"N-Tek\" -----" << endl;
        cout << "Bienvenido a N-Tek, una empresa de componentes electrónicos que ofrece diversa cantidad de productos a sus clientes. Seleccione la opción a la que desea acceder:" << endl;
        cout << "(A) Mostrar todos los productos existentes" << endl;
        cout << "(B) Mostrar los productos por marca" << endl;
        cout << "(C) Mostrar los productos por precio" << endl;
        cout << "(D) Adquirir un nuevo producto" << endl;
        cout << "(E) Dejar una recomendación" << endl;
        cout << "(F) Regresar al menú principal" << endl;
        cout << "(G) Salir" << endl;
        cout << "Seleccione su opción: ";
        cin >> opcionUsuario;
        cout << endl;

        switch (opcionUsuario){
            case 'A':
                //Añadir funcion para mostrar los productos existentes
                break;
            case 'B':
                //Añadir funcion para mostrar los productos por marca
                break;
            case 'C':
                //Añadir funcion para mostrar los productos por precio
                break;
            case 'D':
                //Añadir funcion para adquirir un nuevo producto
                break;
            case 'E':
                dejarRecomendacion();
                break;
            case 'F':
                cout << "Regresando al menú principal..." << endl;
                return;
            case 'G':
                cout << "Saliendo del programa, gracias por su visita..." << endl;
                exit(0);
            default:
                cout << "Opción inválida. Ingrese correctamente o intente de nuevo" << endl;
                break;
        }
        cout << endl;
    }while (true);
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    do{
        mostrarMenuPrincipal();

        switch (opcionPrincipal){
            case 'A':{
                mostrarMenuUsuario();
                break;
            }
            case 'B':{
                string contrasena;
   				cout << "Ingrese la contraseña para acceder a la base de datos: ";
    			cin >> contrasena;
    			if (contrasena == "employeesonly"){
					mostrarMenuBaseDeDatos();
   				}else{
        			cout << "La contraseña es incorrecta, intente de nuevo..." << endl;
   				}
                break;
            }
            case 'C':{
                cout << "Saliendo del programa, gracias por su visita..." << endl;
                exit(0);
            }
            default:{
                cout << "Opción inválida. Ingrese correctamente o intente de nuevo" << endl;
                break;
        	}
        cout << endl;
    	}
    }while (true);

    return 0;
}
