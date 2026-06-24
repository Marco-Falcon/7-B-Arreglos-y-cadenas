#include <iostream>
using namespace std;

int main() {
    
    int N, C;
    cin >> N >> C;
    
    int cont[100] = {0};
    
    for (int i = 0; i < C; i++) {
        
        int vaso;
        cin >> vaso;

        cont[vaso] = cont[vaso] + 1;
    }
    
    for (int i = 1; i <= N; i++) {
        cout << cont[i] << endl;
    }
    
    return 0;
}
