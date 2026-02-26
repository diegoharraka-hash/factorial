#include <iostream>
using namespace std;

int factorial(int n);


int main() {
	int numero;
	int resultado;

	cout << "introduzca un numero";
	cin >> numero;

	resultado=factorial(numero);

	cout << "el factorial del numero es" << resultado<<endl; // si lees la funcion, estaras leyendo la posicon de memoria de esta misma.


}

int factorial(int n) {
	if (n == 0) {
		n = 1;
		return  n;
	}
	return n * factorial(n - 1); // cuando poenmos en la formula factorial quiere decir que absorbe todo el valor de la funcion es decir facorial ya es n y si solo pones n-1 es solo una simple operacion ;
}


