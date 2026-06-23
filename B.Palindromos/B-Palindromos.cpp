#include <iostream>
using namespace std;

int main() {

    char palabra[20];
    int n;

    cin >> n;

    for(int i=0 ; i<n ; i++) {

        cin >> palabra;

        int lon = 0;

        while(palabra[lon] != '\0') {
            lon=lon+1;
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
            cout << "P" << endl;
        else
            cout << "NP" << endl;
    }

    return 0;
}
