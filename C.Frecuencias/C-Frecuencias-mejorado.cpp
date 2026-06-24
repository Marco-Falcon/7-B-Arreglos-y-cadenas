#include <iostream>
using namespace std;

int main() {
    
    int P, n;

    cout << "======================================" << endl;
    cout << "   REGISTRO Y CONTEO DE VOTACIONES   " << endl;
    cout << "======================================" << endl;

    cout << "Ingrese la cantidad de profesores: ";
    cin >> P;

    cout << "Ingrese la cantidad total de votos: ";
    cin >> n;
    
    int votos[100] = {0}; 
    
    cout << endl;
    cout << "Ingrese el numero del profesor por el que voto cada persona:" << endl;

    for (int i = 0; i < n; i++) {
        int np; // np = numero de profesor

        cout << "Voto" << i + 1 << ": ";
        cin >> np;

        votos[np] = votos[np] + 1;
    }

    cout << endl;
    cout << "======================================" << endl;
    cout << "       RESULTADOS DE LA VOTACION" << endl;
    cout << "======================================" << endl;
    
    for (int i = 1; i <= P; i++) {
        cout << "Profesor " << i << " - " << votos[i] << " voto" << endl;
    }

    cout << endl;
    cout << "Fin del programa." << endl;
    
    return 0;
}
