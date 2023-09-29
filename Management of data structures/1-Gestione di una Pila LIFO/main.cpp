#include <iostream>
using namespace std;

//VESCIO RICCARDO
//Gestione di una Pila LIFO

int main(int argc, char** argv) {
	const int n = 5;
	int cursore, i;
	char scelta, risposta;
	string pila[n];
	
	//INIZIALIZZAZIONE DELLA VARIABILE cursore A -1
	cursore = -1;
	//FINE DELL'INIZIALIZZAZIONE
	
	do {
		//OUTPUT DELLE OPERAZIONI POSSIBILI E INSERIMENTO DELL'OPERAZIONE DA EFFETTUARE
		cout << "Inserisci + se vuoi aggiungere un elemento alla pila (PUSH)" << endl;
		cout << "Inserisci - se vuoi prelevare un elemento dalla pila (POP)" << endl;
		cout << "Inserisci T se vuoi visualizzare l'elemento in cima alla pila (TOP)" << endl;
		cout << "Inserisci S se vuoi visualizzare lo stato attuale della pila" << endl;
		cout << "Inserisci l'operazione da effettuare: " << endl;
		cin >> scelta;
		while (scelta != '+' && scelta != '-' && scelta != 'T' && scelta != 'S') {
			cout << "ERRORE, hai inserito un carattere diverso da +, -, S o T" << endl;
			cout << "Reinserisci l'operazione: " << endl;
			cin >> scelta;
		}
		//FINE DELL'OUTPUT E DELL'INSERIMENTO
		
		//OPERAZIONI POSSIBILI
		switch (scelta) {
			//OPERAZIONE DI PUSH
			case '+': {
				if (cursore < (n - 1)) {
					cursore++;
					
					cout << endl;
					cout << "Inserisci il nome da inserire nella pila:" << endl;
					cin >> pila[cursore];
					cout << endl;
				}
				else {
					cout << endl;
					cout << "La pila e' completamente piena, puoi solo effettuare operazioni di POP" << endl;
					cout << endl;
				}
				break;
			}
			//FINE DELL'OPERAZIONE DI PUSH
			
			//OPERAZIONE DI POP
			case '-': {
				if (cursore > -1) {
					cout << endl;
					cout << "Il nome prelevato dalla cima della pila e': " << pila[cursore];
					cout << endl;
					
					pila[cursore] = " ";
					cursore--;
				}
				else {
					cout << endl;
					cout << "La pila e' completamente vuota, puoi solo effettuare operazioni di PUSH" << endl;
					cout << endl;
				}
				break;
			}
			//FINE DELL'OPERAZIONE DI POP
			
			//OPERAZIONE DI TOP
			case 'T': {
				if (cursore > -1) {
					cout << endl;
					cout << "Il nome presente sulla cima della pila e': " << pila[cursore];
					cout << endl;
				}
				else {
					cout << endl;
					cout << "La pila e' completamente vuota" << endl;
					cout << endl;
				}
				break;
			}
			//FINE DELL'OPERAZIONE DI TOP
			
			//OPERAZIONE DI VISUALIZZAZIONE DELLA PILA
			case 'S': {
				cout << endl;
				cout << "Stack: " << endl;
				cout << endl;
				
				for (i = (n - 1); i >= 0; i--) {
					cout << "N " << i << " : " << pila[i] << endl;
				}
				break;
			}
			//FINE DELL'OUTPUT
		}
		
		//RICHIESTA E RISPOSTA DELL'UTENTE
		cout << endl;
		cout << "Vuoi eseguire un'altra operazione?" << endl;
		cout << "Inserisci S o s per SI oppure un altro carattere per NO" << endl;
		cin >> risposta;
		cout << endl;
		//FINE DELLA RICHIESTA E DELLA RISPOSTA
	}while (risposta == 'S' || risposta == 's');
	
	return 0;
}
