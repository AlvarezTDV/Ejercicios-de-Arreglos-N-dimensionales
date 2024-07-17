#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

//FUNCION PARA DEFINIR LAS CELDAS VIVAS O MUERTAS
void vidaConway( int matrizPrimeraGeneracion[][11], int matrizSegundaGeneracion[][11], int fila, int columna ) {
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			matrizPrimeraGeneracion[i][j] = 0;
			matrizSegundaGeneracion[i][j] = 0;
		}
	}
	for ( int i = 1; i < fila; i++ ) {
		for ( int j = 1; j < columna; j++ ) {
			matrizPrimeraGeneracion[i][j] = rand() % 2;
			matrizSegundaGeneracion[i][j] = matrizPrimeraGeneracion[i][j];
		}
	}
}

//FUNCION PARA MOSTRAR MATRIZ
void mostrarMatriz( int matrizPrimeraGeneracion[][11], int matrizSegundaGeneracion[][11], int fila, int columna ) {
	for ( int i = 1; i < fila; i++ ) {
		for ( int j = 1; j < columna; j++ ) {
			cout << matrizPrimeraGeneracion[i][j] << " ";
		}
		cout << "                        ";
		for ( int j = 1; j < columna; j++ ) {
			cout << matrizSegundaGeneracion[i][j] << " ";
		}
		cout << endl;
	}
}

//FUNCION PARA LA SEGUNDA GENERACION
void segundaGeneracion( int matrizPrimeraGeneracion[][11], int matrizSegundaGeneracion[][11], int fila, int columna ) {
	for ( int i = 1; i < fila; i++ ) {
		for ( int j = 1; j < columna; j++ ) {
			int contador = 0;
			if ( matrizPrimeraGeneracion[i - 1][j - 1] == 1 ) {
				contador++;
			}
			if ( matrizPrimeraGeneracion[i - 1][j] == 1 ) {
				contador++;
			} 
			if ( matrizPrimeraGeneracion[i - 1][j + 1] == 1 ) {
				contador++;
			} 
			if ( matrizPrimeraGeneracion[i][j - 1] == 1 ) {
				contador++;
			} 
			if ( matrizPrimeraGeneracion[i][j + 1] == 1 ) {
				contador++;
			} 
			if ( matrizPrimeraGeneracion[i + 1][j - 1] == 1 ) {
				contador++;
			} 
			if ( matrizPrimeraGeneracion[i + 1][j] == 1 ) {
				contador++;
			} 
			if ( matrizPrimeraGeneracion[i + 1][j + 1] == 1 ) {
				contador++;
			}
			if ( contador < 2 ) {
				matrizSegundaGeneracion[i][j] = 0;
			} else if ( contador == 2 && contador == 3 ) {
				matrizSegundaGeneracion[i][j] = 1;
			} else if ( contador > 3 ) {
				matrizSegundaGeneracion[i][j] = 0;
			} else if ( matrizPrimeraGeneracion[i][j] == 0) {
				if ( contador == 3 ) {
					matrizSegundaGeneracion[i][j] = 1;
				}
			}
		}
	}
}

int main() {
	srand(time(0));
	int matrizPrimeraGeneracion[11][11];
	int matrizSegundaGeneracion[11][11];
	vidaConway(matrizPrimeraGeneracion, matrizSegundaGeneracion, 11, 11);
	segundaGeneracion(matrizPrimeraGeneracion, matrizSegundaGeneracion, 11, 11);
	cout << "Primera generacion:                       Segunda generacion: " << endl;
	mostrarMatriz(matrizPrimeraGeneracion, matrizSegundaGeneracion, 11, 11);
	return 0;
}