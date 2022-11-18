#include <iostream>

extern "C" float* sumaVectorial(float*, float*);
extern "C" void escalarPorVector(float*, float);

using namespace std;

void leerVector(float* vect, int numDeVec) {
    if (numDeVec == 1) {
        cout << "Introduzca los 8 elementos del vector(separados por ',')" << endl;
    }
    else {
        cout << "Introduzca los 8 elementos del segundo vector(separados por ',')"
            << endl;
    }

    while (scanf("%f,%f,%f,%f,%f,%f,%f,%f", &vect[0], &vect[1], &vect[2],
        &vect[3], &vect[4], &vect[5], &vect[6], &vect[7]) != 8) {
        cout << "No han sido introducidos correctamente, vuelva a intentarlo."
            << endl;
    }
}

void operar(const int opElegida) {
    float vect1[8];
    float* resultado = new float[8];

    switch (opElegida) {
    case 1:
        cout << "<Suma de dos vectores> :" << endl;
        leerVector(vect1, 1);
        float vect2[8];
        leerVector(vect2, 2);
        resultado = sumaVectorial(vect1, vect2);
        break;
    case 2:
        cout << "<Multiplicar escalar por vector> :" << endl;
        leerVector(vect1, 1);
        int escalar;
        cout << "Introduzca el escalar: " << endl;
        cin >> escalar;
        /*escalarPorVector(int* vect1, int escalar)*/
        break;
    case 3:
        cout << "Digite el numero al cual desea calcular el coseno: ";
        double num; //Variable a calcular el coseno
        cin >> num;
        _asm {
            fld num; //Se sube al stack para realizar operaciones con la FPU
            fcos; //Se calcula su coseno
            fstp num;//Se saca el valor del stack y se devuelve a la variable original
        }
        cout << "\nResultado: " << num << endl;
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
    delete[] resultado;
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
        cout << "¿Quiere hacer otro calculo? (s/n)" << endl;
        cin >> opcion;
        if (opcion != 's') {
            continuar = false;
        }
    }
    return 0;
}