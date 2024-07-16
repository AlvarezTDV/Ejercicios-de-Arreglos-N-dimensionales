#include <iostream>
using namespace std;

//FUNCION PARA MOSTRAR LA MATRIZ
void mostrarMatriz( int matriz [][4], int fila, int columna ) {	
	for ( int i = 0; i < fila; i++ ) {
		for ( int j = 0; j < columna; j++ ) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

//FUNCION PARA COMPROBAR SI LOS VALORES INGRESADOS SON VALIDOS
bool comprobarValor( int filaCambio1, int filaCambio2 ) {
	if ( filaCambio1 >= 0 && filaCambio1 <= 3 && filaCambio2 >= 0 && filaCambio2 <= 3 ) {
		return true;
	} else {
		return false;
	}
}

//FUNCION PARA INTERCAMBIAR LAS FILAS
void intercambiarFilas( int matriz[][4], int filaCambio1, int filaCambio2 ) {
	int aux;
	for ( int i = 0; i < 4; i++ ) {
		aux = matriz[filaCambio1][i];
		matriz[filaCambio1][i] = matriz[filaCambio2][i];
		matriz[filaCambio2][i] = aux;
	}
}

int main() {
	int matriz[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	
	cout << "Matriz:" << endl;
	mostrarMatriz(matriz, 4, 4);	

	int filaCambio1, filaCambio2;
	cout << "Ingrese las filas que desea intercambiar (0-3)" << endl;
	cin >> filaCambio1;
	cin >> filaCambio2;
	
	if ( comprobarValor(filaCambio1, filaCambio2) == true ) {
		intercambiarFilas(matriz, filaCambio1, filaCambio2);
		cout << "Matriz resultante: " << endl;
		mostrarMatriz(matriz, 4, 4);
	} else {
		cout << "Ingreso numeros invalidos" << endl;
	}
	return 0;
}
