#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//VESCIO RICCARDO 3H
//Formica di Langton

int main(int argc, char** argv) {
	int m, n, i, j, x, y, aux;
	char direzione;
	
	//INSERIMENTO DEL NUMERO DI RIGHE DELLA MATRICE
	cout << "Inserisci il numero di righe della matrice: " << endl;
	cin >> m;
	while (m <= 0) {
		cout << "ERRORE, hai inserito un numero minore o uguale a 0" << endl;
		cout << "Reinserisci il numero di righe della matrice: " << endl;
		cin >> m;
	}
	//FINE DELL'INSERIMENTO
	
	//INSERIMENTO DEL NUMERO DI COLONNE DELLA MATRICE
	cout << "Inserisci il numero di colonne della matrice: " << endl;
	cin >> n;
	while (n <= 0) {
		cout << "ERRORE, hai inserito un numero minore o uguale a 0" << endl;
		cout << "Reinserisci il numero di colonne della matrice: " << endl;
		cin >> n;
	}
	//FINE DELL'INSERIMENTO
	
	srand(time(NULL));
	
	//DICHIARAZIONE DELLA MATRICE
	char mat[m][n];
	//FINE DELLA DICHIARAZIONE
	
	//CARICAMENTO DELLA MATRICE CON . E *
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			aux = rand()%2;
			
			if (aux == 1) {
				mat[i][j] = '.';
			}
			else {
				mat[i][j] = '*';
			}
		}
	}
	//FINE DEL CARICAMENTO
	
	//INSERIMENTO DEL NUMERO DI RIGA IN CUI SI TROVA LA FORMICA
	cout << "Inserisci la riga in cui si trova la formica: " << endl;
	cin >> i;
	while (i < 0 || i > (m - 1)) {
		cout << "ERRORE, hai inserito un numero minore di 0 o maggiore di " << (m - 1) << endl;
		cout << "Reinserisci la riga in cui si trova la formica: " << endl;
		cin >> i;
	}
	//FINE DELL'INSERIMENTO
	
	//INSERIMENTO DEL NUMERO DI COLONNA IN CUI SI TROVA LA FORMICA
	cout << "Inserisci la colonna in cui si trova la formica: " << endl;
	cin >> j;
	while (j < 0 || j > (n - 1)) {
		cout << "ERRORE, hai inserito un numero minore di 0 o maggiore di " << (n - 1) << endl;
		cout << "Reinserisci la colonna in cui si trova la formica: " << endl;
		cin >> j;
	}
	//FINE DELL'INSERIMENTO
	
	//INSERIMENTO DELLA DIREZIONE INIZIALE DELLA FORMICA
	cout << "Inserisci la direzione iniziale: " << endl;
	cout << "N-ord, S-ud, E-st, O-vest" << endl;
	cin >> direzione;
	while (direzione != 'N' && direzione != 'S' && direzione != 'E' && direzione != 'O') {
		cout << "ERRORE, hai inserito una lettera diversa da N, S, E ed O" << endl;
		cout << "Reinserisci la direzione iniziale: " << endl;
		cin >> direzione;
	}
	//FINE DELL'INSERIMENTO
	
	//OUTPUT DELLA LEGENDA
	cout << endl;
	cout << endl;
	cout << "+---------------------------------+" << endl;
	cout << "| * = Cella bianca                |" << endl;
	cout << "| . = Cella nera                  |" << endl;
	cout << "| F = Formica su una cella bianca |" << endl;
	cout << "| f = Formica su una cella nera   |" << endl;
	cout << "+---------------------------------+" << endl;
	cout << endl;
	cout << endl;
	//FINE DELL''OUTPUT
	
	do {
		//OUTPUT DELLA MATRICE
		cout << "---------------------------------" << endl;
		cout << "Aggiornamento della superficie:" << endl;
		cout << endl;
		for (x = 0; x < m; x++) {
			for (y = 0; y < n; y++) {
				if (x == i && y == j) {
					if (mat[i][j] == '*') {
						cout << "F ";
					}
					else {
						cout << "f ";
					}
				}
				else {
					cout << mat[x][y] << " ";
				}
			}
			
			cout << endl;
		}
		//FINE DELL'OUTPUT
		
		//OUTPUT DELLA DIREZIONE DELLA FORMICA
		cout << endl;
		cout << "Direzione della formica: " << direzione << endl;
		cout << endl;
		//FINE DELL'OUTPUT
		
		//SPOSTAMENTO DELLA FORMICA
		switch (direzione) {
			case 'N': {
				if (mat[i][j] == '.') {
					direzione = 'O';
					mat[i][j] = '*';
					j--;
				}
				else {
					direzione = 'E';
					mat[i][j] = '.';
					j++;
				}
				break;
			}
			
			case 'S': {
				if (mat[i][j] == '.') {
					direzione = 'E';
					mat[i][j] = '*';
					j++;
				}
				else {
					direzione = 'O';
					mat[i][j] = '.';
					j--;
				}
				break;
			}
			
			case 'E': {
				if (mat[i][j] == '.') {
					direzione = 'N';
					mat[i][j] = '*';
					i--;
				}
				else {
					direzione = 'S';
					mat[i][j] = '.';
					i++;
				}
				break;
			}
			
			case 'O': {
				if (mat[i][j] == '.') {
					direzione = 'S';
					mat[i][j] = '*';
					i++;
				}
				else {
					direzione = 'N';
					mat[i][j] = '.';
					i--;
				}
				break;
			}
		}
		//FINE DELLO SPOSTAMENTO
	}while ((i >= 0 && i < m) && (j >= 0 && j < n));
	
	//OUTPUT FINALE
	cout << "---------------------------------" << endl;
	cout << endl;
	cout << endl;
	cout << "La formica e' uscita dalla superficie disponibile" << endl;
	cout << "Ora si trova nella cella (" << i << "; " << j << "), fuori dalla superficie disponibile" << endl;
	cout << endl;
	cout << "Output della superficie: " << endl;
	cout << endl;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cout << mat[i][j] << " ";
		}
		
		cout << endl;
	}
	//FINE DELL'OUTPUT
	
	return 0;
}
