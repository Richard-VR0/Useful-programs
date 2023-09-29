//VESCIO RICCARDO
//Algoritmo di ordinamento quicksort
package pkg077.quicksort;

public class QuickSort {
    
    //FUNZIONE PER L'ORDINAMENTO DEL VETTORE
    static void ordinamento (int[] v, int sx, int dx) {
        int sinistra;
        int destra;
        int aux;
        int pivot;
        
        //ASSEGNAZIONE DEI VALORI AGLI INDICI DI DESTRA E SINISTRA
        sinistra = sx;
        destra = dx;
        //FINE DELL'ASSEGNAZIONE
    
        //CALCOLO DEL PIVOT
        pivot = v[(sx + dx) / 2];
        //FINE DEL CALCOLO

        //SPOSTAMENTO DEGLI INDICI DI SINISTRA E DESTRA
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
        //FINE DELLO SPOSTAMENTO

        //RICHIAMO DELLA FUNZIONE RICORSIVA
        if (sx < destra) {
            ordinamento(v, sx, destra);
        }

        if (sinistra < dx) {
            ordinamento(v, sinistra, dx);
        }
        //FINE DEL RICHIAMO
    }
    //FINE DELLA FUNZIONE

    public static void main(String[] args) {
        int v[] = new int[10];
        int i, aux;
        
        //CARICAMENTO DEL VETTORE
        for (i = 0; i < v.length; i++) {
            v[i] = ((int) (Math.random() * 10));
        }
        //FINE DEL CARICAMENTO
        
        //OUTPUT DEL VETTORE INIZIALE
        System.out.print("Vettore iniziale: ");
        
        for (i = 0; i < v.length; i++) {
            System.out.print(v[i] + " ");
        }
        
        System.out.println();
        //FINE DELL'OUTPUT
        
        //CALCOLO DEL VALORE DELL'ULTIMO INDICE DEL VETTORE
        aux = v.length - 1;
        //FINE DEL CALCOLO
        
        //RICHIAMO DELLA FUNZIONE ordinamento
        ordinamento(v, 0, aux);
        //FINE DEL RICHIAMO
        
        //OUTPUT DEL VETTORE ORDINATO
        System.out.print("Vettore ordinato: ");
        
        for (i = 0; i < v.length; i++) {
            System.out.print(v[i] + " ");
        }
        
        System.out.println();
        //FINE DELL'OUTPUT
    }
    
}
