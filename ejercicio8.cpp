#include <iostream>
using namespace std;

//FUNCION PARA MOSTRAR LA MATRIZ
void mostrarMatriz( int matriz[][5], int fila, int columna ) {
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

//FUNCION PARA MOSTRAR EL RECORRIDO EN ESPIRAL
void mostrarRecorridoEspiral( int matriz[][5], int ordenMatriz ) {
	int n = ordenMatriz;
	int a = 0;
	int b = n - 1;
	
	for ( int i = 0; i < ordenMatriz; i++ ) {
		for ( int j = a; j <= b; j++ ) {
			cout << matriz[a][j] << " ";
		}
		for ( int j = a + 1; j <= b; j++ ) {
			cout << matriz[j][b] << " ";
		}
		for ( int j = b - 1; j >= a; j-- ) {
			cout << matriz[b][j] << " ";
		}
		for ( int j = b - 1; j >= a + 1; j-- ) {
			cout << matriz[j][a] << " ";
		}
		a++;
		b--;
	}
}

int main() {
	int matriz[5][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	
	cout << "Matriz: " << endl;
	mostrarMatriz(matriz, 5, 5);
	cout << "Recorrido en espiral: " << endl;
	mostrarRecorridoEspiral(matriz, 5);
	return 0;
}
