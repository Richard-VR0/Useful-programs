//VESCIO RICCARDO 4H
//Utilizzo di un vettore dinamico e visualizzazione del vettore al contrario
package pkg076.vettoredinamico;

import java.util.*;

public class VettoreDinamico {
    public static int[] dimensione (int[] a) {
        int[] v = new int[a.length + 1];
        
        int i;
        
        for (i = 0; i < a.length; i++) {
            v[i] = a[i];
        }
        
        return v;
    }
    
    public static void main(String[] args) {
        Scanner str = new Scanner(System.in);
        
        int n, i = 0;
        int a[] = new int[0];
        
        do {
            System.out.print("Inserisci un numero: ");
            n = str.nextInt();
            
            if (n != 0) {
                a = dimensione(a);
            
                a[i] = n;
            
                i++;
            }
        } while (n != 0);
        
        System.out.print("Vettore: ");
        
        for (i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
        
        System.out.print("\nVettore al contrario: ");
        
        for (i = (a.length - 1); i >= 0; i--) {
            System.out.print(a[i] + " ");
        }
        
        System.out.println();
    }
    
}
