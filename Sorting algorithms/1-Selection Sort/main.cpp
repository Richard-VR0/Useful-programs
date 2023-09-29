#include <iostream>
using namespace std;

//VESCIO RICCARDO
//Selection sort

int main(int argc, char** argv) {
	const int n = 5;
	int i, j, aux;
	int v[n];
	
	//CARICAMENTO DEL VETTORE
	for (i = 0; i <= (n - 1); i++) {
		cout << "Inserisci un numero: " << endl;
		cin >> v[i];
	}
	//FINE DEL CARICAMENTO
	
	//CONTROLLO DEI NUMERI
	for (i = 0; i <= (n - 2); i++) {
		for (j = (i + 1); j <= (n - 1); j++) {
			if (v[i] > v[j]) {
				aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}
		}
	}
	//FINE DEL CONTROLLO
	
	//STAMPA DELLA SEQUENZA
	cout << "--------------------------------" << endl;
	cout << "L'ordine crescente dei numeri inseriti e': ";
	
	for (i = 0; i <= (n - 1); i++) {
		cout << v[i] << " ";
	}
	//FINE DELLA STAMPA
	
	return 0;
}
