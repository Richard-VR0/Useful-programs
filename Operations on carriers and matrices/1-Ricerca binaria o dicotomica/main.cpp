#include <iostream>
#include <cmath>
using namespace std;

//VESCIO RICCARDO 3H
//Ricerca binaria o dicotomica

int main(int argc, char** argv) {
	const int n = 6;
	int i, j, aux, sx, dx, md, cercato;
	int v[n];
	bool trovato;
	
	//CARICAMENTO DEL VETTORE
	for (i = 0; i < n; i++) {
		cout << "Inserisci un numero: " << endl;
		cin >> v[i];
	}
	//FINE DEL CARICAMENTO DEL VETTORE
	
	//ORDINAMENTO IN ORDINE CRESCENTE
	for (i = 0; i <= (n - 2); i++) {
		for (j = (i + 1) ; j <= (n - 1); j++){
			if (v[i] > v[j]) {
				aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}
		}
	}
	//FINE DELL'ORDINAMENTO
	
	//INSERIMENTO DEL VALORE DA CERCARE
	cout << "Inserisci il valore che vuoi cercare: " << endl;
	cin >> cercato;
	//FINE DELL'INSERIMENTO
	
	//INIZIALIZZAZIONE DELLE VARIABILI TROVATO, SX E DX
	trovato = false;
	sx = 0;
	dx = n - 1;
	//FINE DELL'INIZIALIZZAZIONE
	
	//INIZIO DEL CONTROLLO
	do {
		md = floor((sx + dx) / 2);
		
		if (v[md] == cercato || v[dx] == cercato || v[sx] == cercato) {
			trovato = true;
		}
		else {
			if (v[md] < cercato) {
				sx = md + 1;
			}
			else {
				dx = md - 1;
			}
		}	
	} while (trovato == false && dx > sx);
	//FINE DEL CONTROLLO
	
	//OUTPUT FINALE
	if (trovato == true) {
		cout << "Valore trovato." << endl;
	}
	else {
		cout << "Valore non presente." << endl;
	}
	//FINE DELL'OUTPUT
	
	return 0;
}
