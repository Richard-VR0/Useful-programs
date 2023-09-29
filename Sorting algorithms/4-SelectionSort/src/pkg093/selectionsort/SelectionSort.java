//VESCIO RICCARDO 4H
//Selection sort
package pkg093.selectionsort;

public class SelectionSort {

    public static void main(String[] args) {
        int v[] = new int[10];
        int i, j, aux;
        
        for (i = 0; i < v.length; i++) {
            v[i] = ((int) (Math.random() * 10));
        }
        
        System.out.print("Vettore iniziale: ");
        
        for (i = 0; i < v.length; i++) {
            System.out.print(v[i] + " ");
        }
        
        for (i = 0; i <= (v.length - 2); i++) {
            for (j = (i + 1); j <= (v.length - 1); j++) {
		if (v[i] > v[j]) {
                    aux = v[j];
                    v[j] = v[i];
                    v[i] = aux;
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
