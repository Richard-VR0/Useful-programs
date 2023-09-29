//VESCIO RICCARDO 4H
//Calcolo della trasposta di una matrice
package pkg084.calcolomatricetrasposta;

public class CalcoloMatriceTrasposta {

    public static void main(String[] args) {
        int mat[][] = new int[2][2];
        
        int n = mat.length;
        int m = mat[0].length;
        
        int trasp[][] = new int[m][n];
        int i, j;
        
        for (i = 0; i < mat.length; i++) {
            for (j = 0; j < mat[0].length; j++) {
                mat[i][j] = ((int) (Math.random() * 11) - 5);
            }
        }
        
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                trasp[j][i] = mat[i][j];
            }
        }
        
        System.out.println("Matrice: ");
        for (i = 0; i < m; i++) {
            for(j = 0; j < n; j++) {
                System.out.print(mat[i][j] + "\t");
            }
            
            System.out.println();
        }
        
        System.out.println("\n\nMatrice trasposta: ");
        for (i = 0; i < m; i++) {
            for(j = 0; j < n; j++) {
                System.out.print(trasp[i][j] + "\t");
            }
            
            System.out.println();
        }
    }
    
}
