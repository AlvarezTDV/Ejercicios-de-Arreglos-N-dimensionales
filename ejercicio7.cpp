#include <iostream>
using namespace std;

//FUNCION PARA MOSTRAR LAS DOS MATRICES (LA NORMAL Y LA ROTADA)
void mostrarMatrices( int matriz[][4], int matrizRotada[][4], int fila, int columna ) {
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			cout << matriz[i][j] << " ";
		}
		cout << "             ";
		for ( int j = 0; j < columna; j++ ) {
			cout << matrizRotada[i][j] << " ";
		}
		cout << endl;
	}
}

//FUNCION PARA ROTAR LA MATRIZ 90 GRADOS EN SENTIDO HORARIO
void rotarMatriz( int matriz[][4], int matrizRotada[][4], int fila, int columna ) {
	int aux;
	
	int k = 3;
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			matrizRotada[j][k] = matriz[i][j];
		}
		k--;
	}
}

int main() {
	int matriz[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 1, 2, 3},
		{4, 5, 6, 7}
	};
	int matrizRotada[4][4];
	
	rotarMatriz(matriz, matrizRotada, 4, 4);
	cout << "Matriz:              Matriz rotada 90 grados en sentido horario:" << endl;
	mostrarMatrices(matriz, matrizRotada, 4, 4);
	
	return 0;
}
