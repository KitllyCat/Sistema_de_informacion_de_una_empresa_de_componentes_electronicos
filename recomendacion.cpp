#include <iostream>
#include "recomendacion.h"
using namespace std;

const int Max_Recomendaciones = 99;
string recomendaciones[Max_Recomendaciones];
int numRecomendaciones = 0;

void dejarRecomendacion(){
    string recomendacion;
    cout << "Ingrese su recomendacion: ";
    cin.ignore();
    getline(cin, recomendacion);
    recomendaciones[numRecomendaciones] = recomendacion;
    numRecomendaciones++;
    
    cout << "Gracias por dejar su recomendacion...!!!" << endl;
}

void mostrarRecomendacion(){
    if (numRecomendaciones == 0){
        cout << "No hay recomendaciones disponibles, intentelo en otra ocasion." << endl;
        return;
    }

    for (int i = 0; i < numRecomendaciones; i++) {
        cout << (i + 1) << ". " << recomendaciones[i] << endl;
    }
}