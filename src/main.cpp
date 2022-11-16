#include <iostream>

// extern "C" void func(int* x, int* y);

using namespace std;

void leerVector(int *vect) {
  // Leer de entrada uno por uno, guardar en arr.
}

void operar(int &opElegida) {
  // Tam. por definir.
  int *vect1; // general
  switch (opElegida) {
  case 1:
    cout << "<Suma de dos vectores> :" << endl;
    leerVector(vect1);
    int *vect2;
    leerVector(vect2);
    /*sumaDeVectores(int* vect1, int* vect2)*/
    break;
  case 2:
    cout << "<Multiplicar escalar por vector> :" << endl;
    leerVector(vect1);
    int escalar;
    cout << "Introduzca el escalar(*tam. max. del escalar*): " << endl;
    cin >> escalar;
    /*escalarPorVector(int* vect1, int escalar)*/
    break;
  case 3:
    cout << "<*funcion* de un vector> :" << endl;
    leerVector(vect1);
    /*_DeVector(int* vect1)*/
    break;

  default:
    break;
  }
}

void menuSelector() {
  int opElegida;
  cout << "------------ Calculadora vectorial ------------" << endl;
  cout << "_______________________________________________" << endl;
  cout << "      >> Elija la operacion a realizar <<      " << endl << endl;
  cout << "<1> Suma de dos vectores. \n";
  cout << "<2> Multiplicar escalar por vector. \n";
  cout << "<3> *funcion* de un vector. \n";
  cin >> opElegida;
  operar(opElegida);
}

int main() {
  menuSelector();
  return 0;
}