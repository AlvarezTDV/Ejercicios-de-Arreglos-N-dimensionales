#include <iostream>
using namespace std;

//FUNCION PARA MOSTRAR UNA MATRIZ
void mostrarMatriz( int matriz[][3], int fila, int columna ) {
	for ( int i = 0; i < fila; i++ ){
		for ( int j = 0; j < columna; j++ ) {
			cout << matriz[i][j] << "  ";
		}
		cout << endl;
	}
}

//FUNCION PARA BUSCAR UN VALOR EN LA MATRIZ
void buscarValor( int valor, int matriz[][3], int fila, int columna ) {
	cout << "El valor " << valor << " se encuentra en:" << endl;
	for ( int i = 0; i < fila; i++ ){
		for ( int j = 0; j < columna; j++ ) {
			if ( valor == matriz[i][j] ) {
				cout << "Fila " << i << ", Columna " << j << endl;
			}
		}
	}
}

//FUNCION PARA VERIFICAR QUE EL VALOR INGRESADO EXISTE EN LA MATRIZ
bool verificarValor( int valor, int matriz[][3], int fila, int columna ) {
	if ( valor != matriz[0][0] && valor != matriz[0][1] && valor != matriz[0][2] &&
		 valor != matriz[1][0] && valor != matriz[1][1] && valor != matriz[1][2] &&
		 valor != matriz[2][0] && valor != matriz[2][1] && valor != matriz[2][2] ) {
		cout << "El valor no existe en la matriz" << endl;
		return false;
	} else {
		return true;
	}
}

int main() {
	int matriz[3][3] = {
	{1, 2, 3},
	{4, 2, 6},
	{7, 2, 9}
	};
	int valor;
	
	cout << "Matriz:" << endl;
	mostrarMatriz(matriz, 3, 3);
	cout << "Valor que desea buscar: ";
	cin >> valor;
	
	if ( verificarValor(valor, matriz, 3, 3) == true ) {
		buscarValor(valor, matriz, 3, 3);
	}
	return 0;
}
