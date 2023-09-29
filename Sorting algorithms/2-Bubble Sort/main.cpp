#include <iostream>
using namespace std;

//VESCIO RICCARDO 3H
//Bubble sort

int main(int argc, char** argv) {
	const int n = 10;
	int i, j, aux;
	int v[n];
	bool scambio;
	
	//CARICAMENTO DEL VETTORE
	for (i = 0; i < n; i++) {
		cout << "Inserisci un numero: " << endl;
		cin >> v[i];
	}
	//FINE DEL CARICAMENTO
	
	//INIZIALIZZAZIONE DELLA VARIABILE I
	i = -1;
	//FINE DELL'INIZIALIZZAZIONE
	
	//CONTROLLO E ORDINAMENTO
	do {
		i = i + 1;
		scambio = false;
		
		for (j = (n - 2); j >= i; j--) {
			if (v[j] > v[j + 1]) {
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
				
				scambio = true;
			}
		}
	} while (i < (n - 2) && scambio == true);
	//FINE DEL CONTROLLO E DELL'ORDINAMENTO
	
	//OUTPUT FINALE
	cout << endl;
	cout << "La sequenza ordinata in modo crescente e': ";
	
	for (i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	//FINE DELL'OUTPUT
	
	return 0;
}
