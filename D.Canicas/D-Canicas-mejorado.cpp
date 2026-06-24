#include <iostream>
using namespace std;

int main() {
    
    int N, C;

    cout << "======================================" << endl;
    cout << "    REGISTRO DE CANICAS EN VASOS     " << endl;
    cout << "======================================" << endl;

    cout << "Ingrese la cantidad de vasos y la cantidad de canicas: ";
    cin >> N >> C;
    
    int cont[100] = {0};
    
    cout << "Ingrese el numero del vaso donde cayo cada canica:" << endl;
    
    for (int i = 0; i < C; i++) {
        
        int vaso;
        
        cout << "Canica " << i + 1 << ": ";
        cin >> vaso;

        cont[vaso] = cont[vaso] + 1;
    }
    
    cout << endl;
    cout << "Cantidad de canicas en cada vaso:" << endl;

    for (int i = 1; i <= N; i++) {
        cout << "Vaso " << i << ": " << cont[i] << endl;
    }

    cout << endl;
    cout << "Fin del programa." << endl;
    
    return 0;
}
