//VESCIO RICCARDO 4H
//Gestione dello stack
package pkg106.gestionestack;

import java.util.Scanner;

public class GestioneStack {

    public static void main(String[] args) {
        Scanner str = new Scanner(System.in);
        
        char scelta;
        
        Stack pila1 = new Stack();
        
        do {
            System.out.println("+--------------+");
            System.out.println("|  PUSH -> +   |");
            System.out.println("|  POP -> -    |");
            System.out.println("|  TOP -> T    |");
            System.out.println("|  Stato -> S  |");
            System.out.println("|  Uscita -> X |");
            System.out.println("+--------------+");
            
            System.out.print("Inserisci l'operazione da effettuare: ");
            scelta = str.next().charAt(0);
            
            switch (scelta) {
                case '+': {
                    pila1.push();
                    
                    break;
                }
                
                case '-': {
                    pila1.pop();
                    
                    break;
                }
                
                case 'T': {
                    pila1.top();
                    
                    break;
                }
                
                case 'S': {
                    pila1.stato();
                    
                    break;
                }
                
                case 'X': {
                    break;
                }
                
                case 'x': {
                    break;
                }
                
                default: {
                    System.out.println("Operazione non disponibile");
                }
            }
            
        } while(scelta != 'X' && scelta != 'x');
    }
    
}
