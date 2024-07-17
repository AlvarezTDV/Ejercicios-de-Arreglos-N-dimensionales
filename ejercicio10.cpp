#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

//FUNCION PARA DEFINIR LAS MINAS DE FORMA ALEATORIA
void minas( int matrizMinas[][11], int matrizMinasDetectadas[][11], int fila, int columna ) {
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			matrizMinas[i][j] = 0;
			matrizMinasDetectadas[i][j] = 0;
		}
	}
	for ( int i = 1; i < fila; i++ ) {
		for ( int j = 1; j < columna; j++ ) {
			matrizMinas[i][j] = rand() % 2;
			matrizMinasDetectadas[i][j] = matrizMinas[i][j];
		}
	}
}

//FUNCION PARA MOSTRAR MATRIZ
void mostrarMatriz( int matrizMinas[][11], int matrizMinasDetectadas[][11], int fila, int columna ) {
	for ( int i = 1; i < fila; i++ ) {
		for ( int j = 1; j < columna; j++ ) {
			cout << matrizMinas[i][j] << " ";
		}
		cout << "                        ";
		for ( int j = 1; j < columna; j++ ) {
			cout << matrizMinasDetectadas[i][j] << " ";
		}
		cout << endl;
	}
}

//FUNCION PARA DETECTAR MINAS
void detectarMinas( int matrizMinas[][11], int matrizMinasDetectadas[][11], int fila, int columna ) {
	for ( int i = 1; i < fila; i++ ) {
		for ( int j = 1; j < columna; j++ ) {
			int contador = 0;
			if ( matrizMinas[i][j] == 0 ) {
				if ( matrizMinas[i - 1][j - 1] == 1 ) {
					contador++;
				}
				if ( matrizMinas[i - 1][j] == 1 ) {
					contador++;
				} 
				if ( matrizMinas[i - 1][j + 1] == 1 ) {
					contador++;
				} 
				if ( matrizMinas[i][j - 1] == 1 ) {
					contador++;
				} 
				if ( matrizMinas[i][j + 1] == 1 ) {
					contador++;
				} 
				if ( matrizMinas[i + 1][j - 1] == 1 ) {
					contador++;
				} 
				if ( matrizMinas[i + 1][j] == 1 ) {
					contador++;
				} 
				if ( matrizMinas[i + 1][j + 1] == 1 ) {
					contador++;
				}
				matrizMinasDetectadas[i][j] = contador;
			}
		}
	}
}

int main() {
	srand(time(0));
	int matrizMinas[11][11];
	int matrizMinasDetectadas[11][11];
	minas(matrizMinas, matrizMinasDetectadas, 11, 11);
	detectarMinas(matrizMinas, matrizMinasDetectadas, 11, 11);
	cout << "Minas generadas:                            Minas detectadas: " << endl;
	mostrarMatriz(matrizMinas, matrizMinasDetectadas, 11, 11);
	return 0;
}
