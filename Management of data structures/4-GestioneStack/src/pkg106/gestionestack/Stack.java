package pkg106.gestionestack;

import java.util.Scanner;

public class Stack {
    private int fine = 0;
    private int lung = 3;
    String valori[] = new String[lung];
    
    public void push() {
        Scanner str = new Scanner(System.in);
        
        if (fine < lung) {
            System.out.println("Inserire il valore da aggiungere: ");
            valori[fine] = str.next();
            
            fine++;
        }
        else {
            System.out.println("Stack pieno, effettuare un'operazione di pop");
        }
    }
    
    public void pop() {
        if (fine > 0) {
            System.out.println("Valore estratto: " + valori[fine - 1]);
        
            fine--;
        }
        else {
            System.out.println("Stack vuoto, effettuare un'operazione di push");
        }
    }
    
    public void top() {
        if (fine > 0) {
            System.out.println("Valore in cima: " + valori[fine - 1]);
        }
        else {
            System.out.println("Stack vuoto, effettuare un'operazione di push");
        }
    }
    
    public void stato() {
        int i;
        
        System.out.println("Cima:");
        
        for (i = (fine - 1); i >= 0; i--) {
            System.out.println("Posizione " + i + ": " + valori[i]);
        }
    }
}
