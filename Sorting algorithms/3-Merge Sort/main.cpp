#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//VESCIO RICCARDO 3H
//Merge sort

//FUNZIONE PER LA FUSIONE DEI 2 SOTTOVETTORI
void merge(int b[], int sx, int mx, int dx) {
	int n1, n2, i, j, k;
	
	//DEFINIZIONE DELLA GRANDEZZA DEL PRIMO VETTORE
	n1 = (mx - sx) + 1;
	//FINE DELLA DEFINIZIONE
	
	//DEFINIZIONE DELLA GRANDEZZA DEL SECONDO VETTORE
	n2 = dx - mx;
	//FINE DELLA DEFINIZIONE
	
	//DICHIARAZIONE DEI 2 SOTTOVETTORI
	int left[n1], right[n2];
	//FINE DELLA DICHIARAZIONE
	
	//CARICAMENTO DEL PRIMO SOTTOVETTORE
	for (i = 0; i < n1; i++) {
		left[i] = b[sx + i];
	}
	//FINE DEL CARICAMENTO
	
	//CARICAMENTO DEL SECONDO SOTTOVETTORE
	for (j = 0; j < n2; j++) {
		right[j] = b[mx + 1 + j];
	}
	//FINE DEL CARICAMENTO
	
	//INIZIALIZZAZIONE DELLA VARIABILE i A 0
	i = 0;
	//FINE DELL'INIZIALIZZAZIONE
	
	//INIZIALIZZAZIONE DELLA VARIABILE j A 0
	j = 0;
	//FINE DELL'INIZIALIZZAZIONE
	
	//INIZIALIZZAZIONE DELLA VARIABILE k A sx
	k = sx;
	//FINE DELL'INIZIALIZZAZIONE
	
	//FUSIONE DEI 2 VETTORI
	while (i < n1 && j < n2) {
		if (left[i] <= right[j]) {
			b[k] = left[i];
			
			i++;
		}
		else {
			b[k] = right[j];
			
			j++;
		}
		
		k++;
	}
	
	//TRASFERIMENTO DELLA PARTE MANCANTE DEL PRIMO SOTTOVETTORE
	while (i < n1) {
		b[k] = left[i];
		
		i++;
		k++;
	}
	//FINE DEL TRASFERIMENTO
	
	//TRASFERIMENTO DELLA PARTE MANCANTE DEL SECONDO SOTTOVETTORE
	while (j < n2) {
		b[k] = right[j];
		
		j++;
		k++;
	}
	//FINE DEL TRASFERIMENTO
	//FINE DELLA FUSIONE
	
}
//FINE DELLA FUNZIONE

//FUNZIONE PER LA DIVISIONE DEI VETTORI IN SOTTOVETTORI
void sort(int a[], int s, int d) {
	int m;
	
	if (s >= d) {
		return;
	}
	
	m = (s + d) / 2;
	
	sort(a, s, m);
	
	sort(a, (m + 1), d);
	
	merge(a, s, m, d);
}
//FINE DELLA FUNZIONE

int main(int argc, char** argv) {
	const int n = 8;
	int g;
	int v[n];
	
	srand(time(NULL));
	
	//CARICAMENTO DEL VETTORE INIZIALE
	for (g = 0; g < n; g++) {
		v[g] = rand()%20;
	}
	//FINE DEL CARICAMENTO
	
	//OUTPUT DEL VETTORE INIZIALE
	cout << "Vector before: " << endl;
	for (g = 0; g < n; g++) {
		cout << v[g] << " ";
	}
	//FINE DELL OUTPUT
	
	//CHIAMATA DELLA FUNZIONE DI ORDINAMENTO
	sort(v, 0, (n - 1));
	//FINE DELLA CHIAMATA
	
	//OUTPUT DEL VETTORE FINALE ORDINATO	
	cout << endl;
	cout << endl;
	cout << "Vector after: " << endl;
	for (g = 0; g < n; g++) {
		cout << v[g] << " ";
	}
	//FINE DELL OUTPUT
	
	return 0;
}
