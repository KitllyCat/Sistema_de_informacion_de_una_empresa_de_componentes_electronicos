#include <iostream>
#include <windows.h>
#include "recomendacion.h" 
#include "mostrar_p.h"
#include "agregar_p.h"
#include "venta_p.h"
#include "colors.h"//libreria para los colores
using namespace std;

char opcionPrincipal, opcionBaseDeDatos, opcionUsuario;

void mostrarMenuPrincipal(){
    cout <<RED <<"----------|"<<CYAN<<"N-Tek"<<RED<<"|----------" << endl;
    cout <<GRAY << "Bienvenido al menú principal, seleccione si es un usuario o si desea acceder a la base de datos: " << endl;
    cout <<GREEN<<"(A) Soy un usuario" << endl;
    cout <<GREEN<< "(B) Deseo modificar la base de datos"<<GRAY<<"(empleado)" << endl;
    cout <<RED<<"(C) Salir" << endl;
    cout <<GREEN<<"Seleccione su opción: ";
    cin >> opcionPrincipal;
    cout << endl;
}

void mostrarMenuBaseDeDatos(){
    do {
        cout <<RED<<"----------|"<<GREEN<<"N-Tek"<<RED<<"|----------" << endl;
        cout <<GRAY<< "Bienvenido a la base de datos de N-Tek, seleccione la opción de la operación que desea realizar en el programa: " << endl;
        cout <<GREEN<< "(A) Ver todos los productos registrados" << endl;
        cout <<GREEN<< "(B) Ver todos los productos ordenados alfabéticamente" << endl;
        cout <<GREEN<< "(C) Ver todos los productos ordenados por su precio" << endl;
        cout <<GREEN<< "(D) Agregar un nuevo producto" << endl;
        cout <<GREEN<< "(E) Eliminar un producto" << endl;
        cout <<GREEN<< "(F) Actualizar los datos existentes" << endl;
        cout <<GREEN<< "(G) Añadir una nueva venta" << endl;
        cout <<GREEN<< "(H) Mostrar las ventas realizadas" << endl;
        cout <<GREEN<< "(I) Mostrar las ventas ordenadas por el precio" << endl;
        cout <<GREEN<< "(J) Ver las recomendaciones de los usuarios" << endl;
        cout <<GREEN<< "(K) Regresar al menú principal" << endl;
        cout <<RED << "(L) Salir" << endl;
        cout <<GREEN<< "Seleccione su opción: ";
        cin >> opcionBaseDeDatos;
        cout << endl;

        switch (opcionBaseDeDatos){
            case 'A':
				verProductosAgregados(); //Añade funcion para ver los productos registrados 
                break;
            case 'B':
                verProductosAgregadosAlf(); //Añade funcion para ver los productos ordenados alfabéticamente
                break;
            case 'C':
                verProductosAgregadosPrecio(); //Añade funcion para ver los productos ordenados por su precio
                break;
            case 'D':
                agregarProducto(); //Añade funcion para agregar un nuevo producto
                break;
            case 'E':
                eliminarProducto(); //Añade funcion para eliminar un producto
                break;
            case 'F':
                actualizarProducto(); //Añade funcion para actualizar los datos existentes
                break;
            case 'G':
                agregarVenta();  //Añade funcion para añadir una nueva venta
                break;
            case 'H':
            	verVentasAgregadas();  //Añade funcion para mostrar las ventas realizadas
                break;
            case 'I':
                verVentasAgregadasPrecio(); //Añade funcion para mostrar las ventas ordenadas por el precio
                break;
            case 'J':
                mostrarRecomendacion();
                break;
            case 'K':
                cout <<LGREEN<< "Regresando al menú principal..." << endl;
                return;
            case 'L':
                cout << MAGENTA<< "Saliendo del programa, gracias por su visita..." << endl;
                exit(0);
            default:
                cout <<RED<<"Opción inválida. Ingrese correctamente o intente de nuevo" << endl;
                break;
        }
        cout << endl;
    }while (true);
}

void mostrarMenuUsuario(){
    do{
        cout <<RED<<"----------|"<<GREEN<<"N-Tek"<<RED<<"|----------" << endl;
        cout <<GRAY << "Bienvenido a N-Tek, una empresa de componentes electrónicos que ofrece diversa cantidad de productos a sus clientes. Seleccione la opción a la que desea acceder:" << endl;
        cout <<GREEN<< "(A) Mostrar todos los productos existentes" << endl;
        cout <<GREEN<< "(B) Mostrar los productos por orden alfabetico" << endl;
        cout <<GREEN<< "(C) Mostrar los productos por precio" << endl;
        cout <<GREEN<< "(D) Dejar una recomendación" << endl;
        cout <<GREEN<< "(E) Regresar al menú principal" << endl;
        cout <<RED<< "(F) Salir" << endl;
        cout <<GREEN<< "Seleccione su opción: ";
        cin >> opcionUsuario;
        cout << endl;

        switch (opcionUsuario){
            case 'A':
                verProductosAgregados();
                break;
            case 'B':
                verProductosAgregadosAlf();
                break;
            case 'C':
                verProductosAgregadosPrecio();
                break;
            case 'D':
                dejarRecomendacion();
                break;
            case 'E':
                cout <<LGREEN<< "Regresando al menú principal..." << endl;
                return;
            case 'F':
                cout <<MAGENTA<<"Saliendo del programa, gracias por su visita..." << endl;
                exit(0);
            default:
                cout <<RED<< "Opción inválida. Ingrese correctamente o intente de nuevo" << endl;
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
   				cout << LGREEN<< "Ingrese la contraseña para acceder a la base de datos: ";
    			cin >> contrasena;
    			if (contrasena == "employeesonly"){
    				cout << GREEN<<"La contraseña es correcta, accediendo a la base de datos..."<<endl;
    				cout << endl;
					mostrarMenuBaseDeDatos();
   				}else{
        			cout <<RED<< "La contraseña es incorrecta, intente de nuevo..." << endl;
        			cout << endl;
   				}
                break;
            }
            case 'C':{
                cout << MAGENTA<< "Saliendo del programa, gracias por su visita..." << endl;
                exit(0);
            }
            default:{
                cout <<RED<<"Opción inválida. Ingrese correctamente o intente de nuevo" << endl;
                break;
        	}
        cout << endl;
    	}
    }while (true);

    return 0;
}
