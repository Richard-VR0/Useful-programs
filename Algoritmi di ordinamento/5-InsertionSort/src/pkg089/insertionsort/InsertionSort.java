//VESCIO RICCARDO 4H
//Insertion Sort
package pkg089.insertionsort;

public class InsertionSort {

    public static void main(String[] args) {
        int v[] = new int[10];
        int i, aux, j;
        boolean insert;
        
        for (i = 0; i < v.length; i++) {
            v[i] = ((int) (Math.random() * 10));
        }
                
        System.out.print("Vettore iniziale: ");
        
        for (i = 0; i < v.length; i++) {
            System.out.print(v[i] + " ");
        }
        
        if (v[0] > v[1]) {
            aux = v[0];
            v[0] = v[1];
            v[1] = aux;
        }
        
        for (i = 2; i < v.length; i++) {
            aux = v[i];
            
            insert = false;
            
            j = i - 1;
            
            while (j >= 0 && insert == false) {
                if (aux <= v[j]) {
                    v[j + 1] = v[j];
                }
                else {
                    v[j + 1] = aux;
                    insert = true;
                }
                
                j--;
                
                if (j < 0 && insert == false) {
                    v[j + 1] = aux;
                }
            }
        }
        
        System.out.print("\n\nVettore ordinato: ");
        
        for (i = 0; i < v.length; i++) {
            System.out.print(v[i] + " ");
        }
        
        System.out.println();
    }
    
}
