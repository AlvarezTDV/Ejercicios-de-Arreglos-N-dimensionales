#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

//FUNCION PARA MOSTRAR MATRIZ
void mostrarMatriz( int matrizBosqueInicial[][11], int matrizBosqueDespues[][11], int fila, int columna ) {
	for ( int i = 1; i < fila; i++ ) {
		for ( int j = 1; j < columna; j++ ) {
			cout << matrizBosqueInicial[i][j] << " ";
		}
		cout << "                   ";
		for ( int j = 1; j < columna; j++ ) {
			cout << matrizBosqueDespues[i][j] << " ";
		}
		cout << endl;
	}
}

//FUNCION PARA CALCULAR EL BOSQUE DESPUES DE LA GENERACION
void bosqueQuemado( int matrizBosqueInicial[][11], int matrizBosqueDespues[][11], int fila, int columna ) {
	for ( int i = 1; i < fila; i++ ) {
		for ( int j = 1; j < columna; j++ ) {
			int contador = 0;
			if ( matrizBosqueInicial[i - 1][j - 1] == 1 ) {
				contador++;
			}
			if ( matrizBosqueInicial[i - 1][j] == 1 ) {
				contador++;
			} 
			if ( matrizBosqueInicial[i - 1][j + 1] == 1 ) {
				contador++;
			} 
			if ( matrizBosqueInicial[i][j - 1] == 1 ) {
				contador++;
			} 
			if ( matrizBosqueInicial[i][j + 1] == 1 ) {
				contador++;
			} 
			if ( matrizBosqueInicial[i + 1][j - 1] == 1 ) {
				contador++;
			} 
			if ( matrizBosqueInicial[i + 1][j] == 1 ) {
				contador++;
			} 
			if ( matrizBosqueInicial[i + 1][j + 1] == 1 ) {
				contador++;
			}
			if ( matrizBosqueInicial[i][j] == 0 ) {
				if ( contador != 0 ) {
					matrizBosqueDespues[i][j] = 1;
				}
			} else if ( matrizBosqueInicial[i][j] == 1 ) {
				matrizBosqueDespues[i][j] = matrizBosqueInicial[i][j] + 1;
			}
		}
	}
}

int main() {
	srand(time(0));
	int matrizBosqueInicial[11][11] = {
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 2, 2, 1, 0, 0},
		{0, 0, 0, 0, 0, 1, 2, 2, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};
	int matrizBosqueDespues[11][11] = {
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 2, 2, 1, 0, 0},
		{0, 0, 0, 0, 0, 1, 2, 2, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};
	bosqueQuemado(matrizBosqueInicial, matrizBosqueDespues, 11, 11);
	cout << "Bosque generado:                       Incendio propagado: " << endl;
	mostrarMatriz(matrizBosqueInicial, matrizBosqueDespues, 11, 11);
	return 0;
}
