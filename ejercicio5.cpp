#include <iostream>
using namespace std;

//FUNCION PARA INGRESAR DATOS DE UNA MATRIZ 4x4
void ingresarDatosMatriz( int matriz[][4], int fila, int columna ) {
	cout << "Ingresa los datos de la matriz" << endl;
	
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			cout << "Posicion [" << i << "] [" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
}

//FUNCION PARA MOSTRAR MATRIZ
void mostrarMatriz( int matriz[][4], int fila, int columna ) {
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

//FUNCION PARA ENCONTRAR EL VALOR MAXIMO DE LA MATRIZ
void valorMax( int matriz[][4], int fila, int columna ) {
	int valorMax, posicionFila, posicionColumna;
	
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			if ( valorMax < matriz[i][j] ) {
				valorMax = matriz[i][j];
				posicionFila = i;
				posicionColumna = j;
			}
		}
	}
	
	cout << "El valor maximo de la matriz es: " << valorMax << endl;
	cout << "Se encuentra en la fila " << posicionFila << ", columna " << posicionColumna << endl;
}

//FUNCION PARA ENCONTRAR EL VALOR MINIMO DE LA MATRIZ
void valorMin( int matriz[][4], int fila, int columna ) {
	int valorMin, posicionFila, posicionColumna;
	
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			if ( valorMin > matriz[i][j] ) {
				valorMin = matriz[i][j];
				posicionFila = i;
				posicionColumna = j;
			}
		}
	}
	
	cout << "El valor minimo de la matriz es: " << valorMin << endl;
	cout << "Se encuentra en la fila " << posicionFila << ", columna " << posicionColumna << endl;
}

int main() {
	int matriz[4][4];
	ingresarDatosMatriz(matriz, 4, 4);
	cout << "La matriz ingresada es: " << endl;
	mostrarMatriz(matriz, 4, 4);
	valorMax(matriz, 4, 4);
	valorMin(matriz, 4, 4);
	return 0;
}
