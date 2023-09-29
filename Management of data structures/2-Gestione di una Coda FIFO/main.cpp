#include <iostream>
using namespace std;

//VESCIO RICCARDO
//Gestione di una Cosa FIFO (First In First Out)

int main(int argc, char** argv) {
	const int n = 5;
	int i, cursore;
	char scelta, risposta;
	string coda[n];
	
	//INIZIALIZZAZIONE DELLA VARIABILE cursore A -1
	cursore = -1;
	//FINE DELL'INIZIALIZZAZIONE
	
	do {
		//OUTPUT DELLA LEGENDA
		cout << "+--------------------------+" << endl;
		cout << "| + = Operazione di PUSH   |" << endl;
		cout << "| - = Operazione di POP    |" << endl;
		cout << "| T = Operazione di TOP    |" << endl;
		cout << "| S = Stato della coda     |" << endl;
		cout << "| X = Uscita dal programma |" << endl;
		cout << "+--------------------------+" << endl;
		
		cout << endl;
		cout << endl;
		//FINE DELL'OUTPUT
		
		//INSERIMENTO DELL'OPERAZIONE
		cout << "Inserisci l'operazione da effettuare: " << endl;
		cin >> scelta;
		while (scelta != '+' && scelta != '-' && scelta != 'T' && scelta != 'S' && scelta != 'X') {
			cout << "ERRORE, hai inserito un carattere diverso da +, -, S, T o X" << endl;
			cout << "Reinserisci l'operazione: " << endl;
			cin >> scelta;
		}
		//FINE DELL'INSERIMENTO
		
		//OPERAZIONI POSSIBILI
		switch (scelta) {
			//OPERAZIONE DI PUSH
			case '+': {
				if (cursore < (n - 1)) {
					cursore++;
					
					cout << endl;
					cout << "Inserisci il nome da inserire nella coda:" << endl;
					cin >> coda[cursore];
					cout << endl;
				}
				else {
					cout << endl;
					cout << "La coda e' completamente piena, devi prima effettuare un'operazione di POP" << endl;
					cout << endl;
				}
				break;
			}
			//FINE DELL'OPERAZIONE DI PUSH
			
			//OPERAZIONE DI POP
			case '-': {
				if (cursore > -1) {
					cout << endl;
					cout << "Il nome prelevato dalla prima posizione della coda e': " << coda[0];
					cout << endl;
					
					for (i = 0; i < cursore; i++) {
						coda[i] = coda[i + 1];
					}
					
					coda[cursore] = " ";
					
					cursore--;
				}
				else {
					cout << endl;
					cout << "La coda e' completamente vuota, devi prima effettuare un'operazione di PUSH" << endl;
					cout << endl;
				}
				break;
			}
			//FINE DELL'OPERAZIONE DI POP
			
			//OPERAZIONE DI TOP
			case 'T': {
				if (cursore > -1) {
					cout << endl;
					cout << "Il nome presente nella prima posizione della coda e': " << coda[0];
					cout << endl;
				}
				else {
					cout << endl;
					cout << "La coda e' completamente vuota" << endl;
					cout << endl;
				}
				break;
			}
			//FINE DELL'OPERAZIONE DI TOP
			
			//OPERAZIONE DI VISUALIZZAZIONE DELLA CODA
			case 'S': {
				cout << endl;
				cout << "Queue: " << endl;
				cout << endl;
				
				for (i = 0; i <= cursore; i++) {
					cout << "N " << i << " : " << coda[i];
					
					cout << endl;
				}
				
				cout << endl;
				cout << endl;
				break;
			}
			//FINE DELL'OUTPUT
		}
	} while (scelta != 'X' || scelta != 'X');
	
	return 0;
}
