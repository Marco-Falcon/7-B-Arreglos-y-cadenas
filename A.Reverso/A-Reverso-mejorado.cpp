#include <iostream>
using namespace std;
int main(){
	int A[20], n, aux=0;

	cout<<"Ingrese la cantidad de elementos: "<<endl;
	cin>>n;

	cout<<"Ingrese los elementos del arreglo:"<<endl;
	for(int i=0 ; i<n ; i++)
		cin>>A[i];

	for(int i=0 ; i<(n/2); i++){
		aux = A[i];
		A[i] = A[n-i-1];
		A[n-i-1] = aux;
	}

	cout<<"El arreglo invertido es:"<<endl;
	for(int i=0 ; i<n ; i++)
		cout<<A[i]<<endl;

	return 0;
}
