//VESCIO RICCARDO 4H
//Prodotto tra 2 matrici
package pkg082.prodottotramatrici;

public class ProdottotraMatrici {

    public static void main(String[] args) {
        int mat1[][] = new int[2][3];
        int mat2[][] = new int[3][2];
        int prod[][] = new int[mat1.length][mat2[0].length];
        int i, j, k, t, aux;
        
        //CARICAMENTO DELLA PRIMA MATRICE
        for (i = 0; i < mat1.length; i++) {
            for(j = 0; j < mat1[0].length; j++) {
                mat1[i][j] = ((int) (Math.random()*10));
            }
        }
        //FINE DEL CARICAMENTO
        
        //CARICAMENTO DELLA SECONDA MATRICE
        for (i = 0; i < mat2.length; i++) {
            for(j = 0; j < mat2[0].length; j++) {
                mat2[i][j] = ((int) (Math.random()*11));
            }
        }
        //FINE DEL CARICAMENTO
        
        //CALCOLO DEL PRODOTTO DELLE 2 MATRICI
        for (i = 0; i < prod.length; i++) {
            for(j = 0; j < prod[0].length; j++) {
                t = 0;
                k = 0;
                aux = 0;
                
                while ((t < mat1[0].length) && (k < mat2.length)) {
                    aux += (mat1[i][t] * mat2[k][j]);
                    
                    t++;
                    k++;
                }
                
                prod[i][j] = aux;
            }
        }
        //FINE DEL CALCOLO
        
        //OUTPUT DELLE 3 MATRICI
        System.out.println("Prima matrice: ");
        for (i = 0; i < mat1.length; i++) {
            for(j = 0; j < mat1[0].length; j++) {
                System.out.print(mat1[i][j] + "\t");
            }
            
            System.out.println();
        }
        
        System.out.println("\nSeconda matrice: ");
        for (i = 0; i < mat2.length; i++) {
            for(j = 0; j < mat2[0].length; j++) {
                System.out.print(mat2[i][j] + "\t");
            }
            
            System.out.println();
        }
        
        System.out.println("\nProdotto delle matrici: ");
        for (i = 0; i < prod.length; i++) {
            for(j = 0; j < prod[0].length; j++) {
                System.out.print(prod[i][j] + "\t");
            }
            
            System.out.println();
        }
        //FINE DELL'OUTPUT
    }
    
}
