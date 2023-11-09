#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/*
I/O array monodimensionale
*/

//Stampa di un array monodimensionale
void stampa_array(int v[], int dim) {
	int i;
	
	for (i = 0; i < dim; i++) {
		printf("%d ", v[i]);
	}
}

//Caricamento di un array monodimensionale
void lettura_array(int v[], int dim) {
	int i;
	
	for (i = 0; i < dim; i++) {
		printf("Inserisci un numero nell' array: ");
		scanf("%d", &v[i]);
	}
}

//Caricamento con valori casuali di un array monodimensionale (compresi tra min e max)
void random_array(int v[], int dim, int min, int max) {
	srand(time(NULL));
	
	int i;
	
	for (i = 0; i < dim; i++) {
		v[i] = (rand() % max) + min;
	}
}

/*
Operazioni su array monodimenzionale
*/

//Ricerca della posizione del valore minimo dell'array
int min_array(int v[], int dim) {
	int min_pos = v[0];
	int i;
	
	for (i = 1; i < dim; i++) {
		if (min_pos > v[i]) {
			min_pos = i;
		}
	}
	
	return min_pos;
}
//Ricerca della posizione del valore massimo dell'array
int max_array(int v[], int dim) {
	int max_pos = v[0];
	int i;
	
	for (i = 1; i < dim; i++) {
		if (max_pos < v[i]) {
			max_pos = i;
		}
	}
	
	return max_pos;
}

/*
I/O data in formato dd/mm/yyyy e definizione struttura per la data (data_t)
*/

//Definizione della struttura data_t che rappresenta una data con giono, mese e anno
typedef struct {
	int d, m, y;
} data_t;

//Inserimento della data con formato (dd/mm/yyyy)
void lettura_data(data_t *data) {
	printf("Inserisci la data nel formato (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &data->d, &data->m, &data->y);
}

//Stampa della data con formato (dd/mm/yyyy)
void stampa_data(data_t *data) {
	printf("%d/%d/%d", data->d, data->m, data->y);
}

/*
Ordinamento vettore
*/

//Bubble sort
void bubblesort(int v[], int dim) {
	int i, j, aux;
	int scambio;
	
	i = -1;
	
	do {
		i = i + 1;
		scambio = 0;
		
		for (j = (dim - 2); j >= i; j--) {
			if (v[j] > v[j + 1]) {
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
				
				scambio = 1;
			}
		}
	} while (i < (dim - 2) && scambio == 1);
}
