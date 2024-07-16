#include <iostream>
using namespace std;

//FUNCION PARA INGRESAR DATOS A UNA MATRIZ 4x4
void ingresarDatosMatriz( int matriz[][4], int fila, int columna ) {
	cout << "Ingresa valores a la matriz 4x4" << endl;
	
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			cout << "Posicion [" << i << "] [" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
}

//FUNCION PARA MOSTRAR LA MATRIZ
void mostrarMatriz( int matriz [][4], int fila, int columna ) {
	cout << "La matriz ingresada es: " << endl;
	
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			cout << matriz[i][j] << "  ";
		}
		cout << endl;
	}
}

//FUNCION PARA SUMAR LAS DOS DIAGONALES DE LA MATRIZ
void sumaDiagonales( int matriz[][4] ) {
	int sumaDiagonal1 = 0;
	int sumaDiagonal2 = 0;
	
	for ( int i = 0; i < 4; i++ ) {
		sumaDiagonal1 = sumaDiagonal1 + matriz[i][i];
	}
	
	int j = 3;
	for ( int i = 0; i < 4; i++ ) {
		sumaDiagonal2 = sumaDiagonal2 + matriz[i][j];
		j--;
	}
	
	cout << "La suma de las diagonales son: " << endl;
	cout << "Diagonal 1: " << sumaDiagonal1 << endl;
	cout << "Diagonal 2: " << sumaDiagonal2 << endl;
}

int main() {
	int matriz[4][4];
	ingresarDatosMatriz(matriz, 4, 4);
	mostrarMatriz(matriz, 4, 4);
	sumaDiagonales(matriz);
	return 0;
}
