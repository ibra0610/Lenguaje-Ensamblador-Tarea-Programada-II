#include <iostream>
#include <cstdio>
#include <Windows.h>

extern "C" float* sumaVectorial(float*, float*, float*);
extern "C" float calcCoseno(float);
//extern "C" float* escalarPorVector(float*, float);

using namespace std;
/*
float* sumaVectorial(float* v1, float* v2) {
    for (int i = 0; i < 4; i++) {
        v1[i] += v2[i];
    }
    return v1;
}
*/

void leerVector(float* vect, int numDeVec) {
    if (numDeVec == 1) {
        cout << "Introduzca los 8 elementos del vector." << endl;
    }
    else {
        cout << "Introduzca los 8 elementos del segundo vector." << endl;
    }

    for (int i = 0; i < 8; i++) {
        cin >> vect[i];
    }
}

void operar(const int opElegida) {
    float vect1[8];
    float* resultado =(float*) calloc(8, sizeof(float));

    switch (opElegida) {
    case 1:
        cout << "<Suma de dos vectores> :" << endl;
        leerVector(vect1, 1);
        float vect2[8];
        leerVector(vect2, 2);
        resultado = sumaVectorial(vect1, vect2, resultado);
        break;
    case 2:
        cout << "<Multiplicar escalar por vector> :" << endl;
        leerVector(vect1, 1);
        int escalar;
        cout << "Introduzca el escalar: " << endl;
        cin >> escalar;
        /*
        __asm{
            mov ax, @data
            mov ds, ax

            mov cx, 8
            mov si, 0

            multiplique:
            mov ax, vect1[si]
            IMUL ax, escalar
            mov vect1[si], ax

            inc si

            loop multiplique
        };
        cout <<vect1[0] << endl;
        */
        /*escalarPorVector(int* vect1, int escalar)*/
        break;
    case 3:
        cout << "Digite el numero al cual desea calcular el coseno: ";
        float num; //Variable a calcular el coseno
        cin >> num;
        cout << "\nResultado: " << calcCoseno(num) << endl;
        
        break;

    default:
        cout << "Error al elegir operacion" << endl;
        break;
    }
    if (opElegida != 3) {
        cout << "Resultado: ";
        cout << "[";
        for (int i = 0; i < 7; i++) {
            cout << resultado[i] << ", ";
        }
        cout << resultado[7] << "]" << endl;
    }
    free(resultado);
    resultado = nullptr;
    return;
}

void menuSelector() {
    int opElegida;
    cout << "------------ Calculadora vectorial ------------" << endl;
    cout << "_______________________________________________" << endl;
    cout << "      >> Elija la operacion a realizar <<      " << endl << endl;
    cout << "<1> Suma de dos vectores. \n";
    cout << "<2> Multiplicar escalar por vector. \n";
    cout << "<3> Calcular Coseno de un numero. \n";
    cin >> opElegida;
    operar(opElegida);
}

int main() {
    bool continuar = true;
    char opcion;
    while (continuar) {
        menuSelector();
        cout << "Quiere hacer otro calculo? (s/n)" << endl;
        cin >> opcion;
        if (opcion != 's') {
            continuar = false;
        }
    }
    return 0;
}