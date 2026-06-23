#include <iostream>
using namespace std;

int main() {

    char palabra[20];
    int n;

    cout << "======================================" << endl;
    cout << "     VERIFICADOR DE PALINDROMOS      " << endl;
    cout << "======================================" << endl;

    cout << "Ingrese la cantidad de palabras: ";
    cin >> n;

    for(int i=0 ; i<n ; i++) {

        cout << endl;
        cout << "Ingrese la palabra: ";
        cin >> palabra;

        int lon = 0;

        while(palabra[lon] != '\0') {
            lon = lon + 1;
        }

        bool palindromo = 1;

        // Comparar letras
        for(int i = 0; i < lon/2; i++) {

            if(palabra[i] != palabra[lon-1-i]) {
                palindromo = false;
                break;
            }
        }

        if(palindromo == 1)
            cout << "La palabra SI es un palindromo." << endl;
        else
            cout << "La palabra NO es un palindromo." << endl;
    }

    cout << endl;
    cout << "Fin del programa." << endl;

    return 0;
}
