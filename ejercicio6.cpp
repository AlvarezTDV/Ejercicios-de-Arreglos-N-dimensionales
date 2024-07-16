#include <iostream>
using namespace std;

//FUNCION PARA MOSTRAR MATRIZ
void mostrarMatriz( int matriz[][6], int fila, int columna ) {
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

//FUNCION PARA REFLEJAR MATRIZ HORIZONTALMENTE
void reflejarMatriz( int matriz[][6] ) {
	int aux;
	
	for ( int i = 0; i < 6; i++ ) {
		int k = 0;
		for ( int j = 5; j >= 3; j-- ) {
			aux = matriz[i][k];
			matriz[i][k] = matriz[i][j];
			matriz[i][j] = aux;
			k++;
		}
	}
}

int main() {
	int matriz[6][6] = {
		{1, 2, 3, 4, 5, 6},
		{7, 8, 9, 1, 2, 3},
		{4, 5, 6, 7, 8, 9},
		{1, 2, 3, 4, 5, 6},
		{7, 8, 9, 1, 2, 3},
		{4, 5, 6, 7, 8, 9}
	};
	
	cout << "Matriz: " << endl;
	mostrarMatriz(matriz, 6, 6);
	reflejarMatriz(matriz);
	cout << "Matriz reflejada horizontalmente: " << endl;
	mostrarMatriz(matriz, 6, 6);
	return 0;
}
