#include <iostream>
using namespace std;

//FUNCION PARA CREAR UN CUADRADO LATINO
void cuadradoLatino( int matriz[][100], int orden ) {
	for ( int i = 0; i < orden; i++ ) {
		matriz[0][i] = i + 1;
	}
	
	for ( int i = 1; i < orden; i++ ) {
		for ( int j = 0; j < orden; j++ ) {
			matriz[i][j] = matriz[i - 1][(j + orden - 1) % orden];
		}
	}
}

//FUNCION PARA MOSTRAR MATRIZ
void mostrarMatriz( int matriz[][100], int orden ) {
	for ( int i = 0; i < orden; i++ ) {
		for ( int j = 0; j < orden; j++ ) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int orden;
	cout << "Ingrese el orden de la matriz: ";
	cin >> orden;
	int matriz[100][100];
	cuadradoLatino(matriz, orden);
	mostrarMatriz(matriz, orden);
	return 0; 
}
