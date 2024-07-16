#include <iostream>
using namespace std;

//FUNCION PARA MULTIPLIZAR MATRICES
void multiplicacionMatrices(int matrizA[][3], int matrizB[][3], int matrizMultiplicada[][3], int filas, int columnas){
	for ( int i = 0; i < filas; i++ ) {
		for ( int j = 0; j < columnas; j++ ) {
			matrizMultiplicada[i][j] = 0;
		}
		for ( int j = 0; j < columnas; j++){
			for ( int k = 0; k < columnas; k++) {
				matrizMultiplicada[i][j] = matrizMultiplicada[i][j] + matrizA[i][k] * matrizB[k][j];
			}
		}
	}
}

int main() {
	int matrizA[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int matrizB[3][3] = {
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1}
	};
	int matrizMultiplicada[3][3];
	multiplicacionMatrices(matrizA, matrizB, matrizMultiplicada, 3, 3);
	
	cout << "Matriz A:        Matriz B:        Resultado:" << endl;
	for ( int i = 0; i < 3; i++ ) {
		for ( int j = 0; j < 3; j++ ) {
			cout << matrizA[i][j] << " ";
		}
		cout << "           ";
		for ( int j = 0; j < 3; j++ ) {
			cout << matrizB[i][j] << " ";
		}
		cout << "           ";
		for ( int j = 0; j < 3; j++ ) {
			cout << matrizMultiplicada[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
