#include <iostream>
using namespace std;

int main() {
    int P, n;
    cin >> P >> n;
    
    int votos[100] = {0}; 
    
    for (int i = 0; i < n;	 i++) {
        int np; //np = numero de profesor 
        cin >> np;
        votos[np] = votos[np] + 1;
    }
    
    for (int i = 1; i <= P; i++) {
        cout << i << " - " << votos[i] << endl;
    }
    
    return 0;
}
