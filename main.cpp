#include <iostream>
#include <windows.h>
#include "recomendacion.h" 
#include "mostrar_p.h"
#include "agregar_p.h"
#include "venta_p.h"
#include "colors.h"//libreria para los colores
using namespace std;

char opcionPrincipal, opcionBaseDeDatos, opcionUsuario;

void inicializarProductos() {
    productos[0] = {"Tarjeta_Grafica_NVIDIA_GeForce_RTX_3080", 700};
    productos[1] = {"Tarjeta_Grafica_AMD_Radeon_RX_6800_XT", 650};
    productos[2] = {"Tarjeta_Grafica_NVIDIA_GeForce_GTX_1660_Super", 230};
    productos[3] = {"Procesador_Intel_Core_i9_11900K", 550};
    productos[4] = {"Procesador_AMD_Ryzen_9_5900X", 500};
    productos[5] = {"Procesador_Intel_Core_i5_11400F", 180};
    productos[6] = {"Memoria_RAM_Corsair_Vengeance_LPX_16GB", 80};
    productos[7] = {"Memoria_RAM_G_Skill_Trident_Z_RGB_32GB", 170};
    productos[8] = {"Memoria_RAM_Kingston_HyperX_Fury_8GB", 40};
    productos[9] = {"Memoria_de_almacenamiento_Samsung_970_EVO_Plus_1TB", 150};
    productos[10] = {"Memoria_de_almacenamiento_WD_Blue_500GB", 55};
    productos[11] = {"Memoria_de_almacenamiento_Seagate_Barracuda_2TB", 60};
    productos[12] = {"Fuente_de_alimentacion_EVGA_SuperNOVA_750_G5", 130};
    productos[13] = {"Fuente_de_alimentacion_Corsair_RM850x", 140};
    productos[14] = {"Fuente_de_alimentacion_Seasonic_Focus_GX_650", 100};
    productos[15] = {"Placa_madre_base_ASUS_ROG_Strix_Z590_E_Gaming", 370};
    productos[16] = {"Placa_madre_base_MSI_B450_TOMAHAWK_MAX", 110};
    productos[17] = {"Placa_madre_base_Gigabyte_Z490_AORUS_Elite", 190};
    productos[18] = {"Monitor_LG_UltraGear_27GL83A_B_27_QHD_IPS", 380};
    productos[19] = {"Monitor_ASUS_TUF_Gaming_VG249Q_23.8_FHD", 200};
    productos[20] = {"Monitor_Dell_UltraSharp_U2720Q_27_4K", 550};
    productos[21] = {"Teclado_Logitech_G_Pro_X_Mechanical_Gaming_Keyboard", 150};
    productos[22] = {"Teclado_Razer_BlackWidow_Elite_Mechanical_Gaming_Keyboard", 170};
    productos[23] = {"Teclado_SteelSeries_Apex_Pro_Mechanical_Gaming_Keyboard", 200};
    productos[24] = {"Raton_Logitech_MX_Master_3", 100};
    productos[25] = {"Raton_Razer_DeathAdder_V2", 70};
    productos[26] = {"Raton_Corsair_Dark_Core_RGB_SE", 90};
    productos[27] = {"Audifonos_HyperX_Cloud_II_Gaming_Headset", 100};
    productos[28] = {"Audifonos_SteelSeries_Arctis_7_Wireless", 150};
    productos[29] = {"Audifonos_Logitech_G_Pro_X_Wireless", 200};
    cantidadProductos = 30;
}

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
	inicializarProductos();
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
