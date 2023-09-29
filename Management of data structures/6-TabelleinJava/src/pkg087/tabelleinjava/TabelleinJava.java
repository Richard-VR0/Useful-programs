//VESCIO RICCARDO 4H
//Caricamento di una tabella e visualizzazione
package pkg087.tabelleinjava;

import java.util.Scanner;

public class TabelleinJava {
    public static class S_Data {
        public int giorno;
        public int mese;
        public int anno;
    }
    
    public static class S_Voto {
        public String materia;
        public float voto;
        public S_Data datavoto = new S_Data();
    }

    public static void main(String[] args) {
        Scanner str = new Scanner(System.in);
        int n, i;
        
        System.out.print("Inserire la quantità di voti da inserire: ");
        n = str.nextInt();
        
        S_Voto voti[] = new S_Voto[n];
        
        for(i = 0; i < n; i++) {
            voti[i] = new S_Voto();
            System.out.print("Inserire la materia: ");
            voti[i].materia = str.next();
            
            System.out.print("Inserire la valutazione: ");
            voti[i].voto = str.nextFloat();
            
            System.out.print("Inserire il giorno della valutazione: ");
            voti[i].datavoto.giorno = str.nextInt();
            
            System.out.print("Inserire il mese della valutazione: ");
            voti[i].datavoto.mese = str.nextInt();
            
            System.out.print("Inserire l'anno della valutazione: ");
            voti[i].datavoto.anno = str.nextInt();
            
        }
        
        System.out.println("\n\n+-------------------------------------------+");
        
        for(i = 0; i < n; i++) {
            System.out.println("Materia: " + voti[i].materia);
            
            System.out.println("Valutazione: " + voti[i].voto);
            
            System.out.println("Data: " + voti[i].datavoto.giorno + "/" + voti[i].datavoto.mese + "/" + voti[i].datavoto.anno);
            
            System.out.println("+-------------------------------------------+");
        }
    }
    
}
