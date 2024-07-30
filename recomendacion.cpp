#include <iostream>
#include "recomendacion.h"
#include "colors.h"
using namespace std;

const int Max_Recomendaciones = 99;
string recomendaciones[Max_Recomendaciones];
int numRecomendaciones = 0;

void dejarRecomendacion(){
    string recomendacion;
    cout << GREEN<<"Ingrese su recomendacion: ";
    cin.ignore();
    getline(cin, recomendacion);
    recomendaciones[numRecomendaciones] = recomendacion;
    numRecomendaciones++;
    
    cout << ORANGE<<"Gracias por dejar su recomendacion...!!!" << endl;
}

void mostrarRecomendacion(){
    if (numRecomendaciones == 0){
        cout << RED<<"No hay recomendaciones disponibles, intentelo en otra ocasion." << endl;
        return;
    }

    for (int i = 0; i < numRecomendaciones; i++) {
        cout <<LBLUE<< (i + 1) << ". " << GREEN<<recomendaciones[i] << endl;
    }
}