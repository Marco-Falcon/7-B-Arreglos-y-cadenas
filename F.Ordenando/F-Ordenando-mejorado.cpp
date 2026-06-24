#include <iostream>
#include <string>
using namespace std;

int main () {
	
	string cadena;
	int frecuencia[26] = {0};
	int indice = 0;

	cout << "======================================" << endl;
	cout << "   ORDENADOR ALFABETICO DE LETRAS " << endl;
	cout << "======================================" << endl;
	cout << "Ingrese una frase en minusculas:" << endl;

	getline(cin, cadena);

	for(int i = 0; i < cadena.length(); i++){
		if(cadena[i] >= 'a' && cadena[i] <= 'z'){
			frecuencia[cadena[i] - 'a']++;
		}
	}

	for(int i = 0; i < cadena.length(); i++){
		if(cadena[i] >= 'a' && cadena[i] <= 'z'){

			while(frecuencia[indice] == 0){
				indice++;
			}

			cadena[i] = 'a' + indice;
			frecuencia[indice]--;
		}
	}

	cout << endl;
	cout << "Texto ordenado:" << endl;
	cout << cadena << endl;

	cout << endl;
	cout << "Fin del programa." << endl;

	return 0;
}
