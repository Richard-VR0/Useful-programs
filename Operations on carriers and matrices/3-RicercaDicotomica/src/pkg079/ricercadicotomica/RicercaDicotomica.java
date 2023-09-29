//VESCIO RICCARDO 4H
//Inserire un numero e cercarlo all'interno di un vettore 10 tramite l'algoritmo della ricerca dicotomica
package pkg079.ricercadicotomica;

import java.util.Scanner;

public class RicercaDicotomica {
    static void ordinamento (int[] v, int sx, int dx) {
        int sinistra;
        int destra;
        int aux;
        int pivot;
        
        sinistra = sx;
        destra = dx;
    
        pivot = v[(sx + dx) / 2];

        while (sinistra < destra) {

            while (v[sinistra] < pivot) {
                sinistra++;
            }

            while (v[destra] > pivot) {
                destra--;
            }

            if (sinistra <= destra) {
                aux = v[sinistra];
            
                v[sinistra] = v[destra];
                    
                v[destra] = aux;
            
                sinistra++;
            
                destra--;
            }
        }

        if (sx < destra) {
            ordinamento(v, sx, destra);
        }

        if (sinistra < dx) {
            ordinamento(v, sinistra, dx);
        }
    }

    public static void main(String[] args) {
        Scanner str = new Scanner(System.in);
        
        int val, inizio, fine, centro, i;
        int[] v = new int[10];
        boolean trovato = false;
        
        for (i = 0; i < v.length; i++) {
            v[i] = ((int) (Math.random() * 10));
        }
        
        System.out.print("Vettore iniziale: ");
        
        for (i = 0; i < v.length; i++) {
            System.out.print(v[i] + " ");
        }
        
        inizio = 0;
        fine = v.length - 1;
        
        ordinamento(v, 0, fine);
        
        System.out.print("\n\nVettore ordinato: ");
        
        for (i = 0; i < v.length; i++) {
            System.out.print(v[i] + " ");
        }
        
        System.out.print("\n\nInserire il termine da cercare nel vettore: ");
        val = str.nextInt();
        
        while ((trovato == false) && (inizio < fine)) {
            centro = (inizio + fine) / 2;
            
            if ((val == v[centro]) || (val == v[inizio]) || (val == v[fine])) {
                trovato = true;
            }
            else {
                if (val < v[centro]) {
                    fine = centro - 1;
                }
                else {
                    inizio = centro + 1;
                }
            }
        }
        
        if (trovato == true) {
            System.out.println("Numero presente nel vettore");
        }
        else {
            System.out.println("Numero non presente nel vettore");
        }
    }
    
}
