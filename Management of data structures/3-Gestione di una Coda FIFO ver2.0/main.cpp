#include <iostream>
using namespace std;

//VESCIO RICCARDO
//Gestione di una Coda FIFO (First In First Out) ver2.0

int main(int argc, char** argv) {
	const int n = 5;
	int i, inizio, fine;
	char scelta;
	string coda[n];
	bool caricamento;
	
	//INIZIALIZZAZIONE DELLA VARIABILE inizio A 0, fine A 0 e caricamento A FALSE
	inizio = 0;
	fine = 0;
	caricamento = false;
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
				if (inizio == fine && caricamento == true) {
					cout << endl;
					cout << "La coda e' completamente piena, devi prima effettuare un operazione di POP" << endl;
					cout << endl;
				}
				else {
					cout << endl;
					cout << "Inserisci il valore da inserire nella coda: " << endl;
					cin >> coda[fine];
					cout << endl;
						
					if (fine < (n - 1)) {
						fine++;
					}
					else {
						fine = 0;
					}
				}
				
				caricamento = true;
				break;
			}
			//FINE DELL'OPERAZIONE DI PUSH
			
			//OPERAZIONE DI POP
			case '-': {
				if (inizio == fine && caricamento == false) {
					cout << endl;
					cout << "La coda e' completamente vuota, devi prima effettuare un operazione di PUSH" << endl;
					cout << endl;
				}
				else {
					cout << endl;
					cout << "Il valore prelevato dalla coda e': " << coda[inizio] << endl;
					cout << endl;
					
					coda[inizio] = " ";
					
					if (inizio < (n - 1)) {
						inizio++;
					}
					else {
						inizio = 0;
					}
				}
				
				caricamento = false;
				break;
			}
			//FINE DELL'OPERAZIONE DI POP
			
			//OPERAZIONE DI TOP
			case 'T': {
				if (inizio == fine && caricamento == false) {
					cout << endl;
					cout << "La coda e' completamente vuota, devi prima effettuare un operazione di PUSH" << endl;
					cout << endl;
				}
				else {
					cout << endl;
					cout << "Il valore prelevato dalla coda e': " << coda[inizio] << endl;
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
				if (inizio == fine && caricamento == false) {
					cout << "La coda e' vuota" << endl;
				}
				else {
					if (inizio < fine) {
						for (i = inizio; i < fine; i++) {
							cout << coda[i] << endl;
						}
					}
					else {
						for (i = inizio; i < n; i++) {
							cout << coda[i] << endl;
						}
					
						for (i = 0; i < fine; i++) {
							cout << coda[i] << endl;
						}
					}
				}
				
				cout << endl;
				break;
			}
			//FINE DELL'OUTPUT
		}
	} while (scelta != 'X' || scelta != 'X');
	
	return 0;
}
