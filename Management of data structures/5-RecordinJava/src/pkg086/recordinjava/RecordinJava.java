//VESCIO RICCARDO 4H
//Caricamento di 2 record e visualizzazione
package pkg086.recordinjava;

import java.util.Scanner;

public class RecordinJava {
    public static class S_Alunno {
        public String cognome;
        public String nome;
        public String classe;
        public char sezione;
    }
    
    public static class S_Data {
        public int giorno;
        public int mese;
        public int anno;
    }
    
    public static void main(String[] args) {
        Scanner str = new Scanner(System.in);
        String txt;
        
        S_Alunno alunno1 = new S_Alunno();
        S_Data data1 = new S_Data();
        
        System.out.print("Inserire cognome: ");
        alunno1.cognome = str.next();
        
        System.out.print("Inserire nome: ");
        alunno1.nome = str.next();
        
        System.out.print("Inserire classe: ");
        alunno1.classe = str.next();
        
        System.out.print("Inserire sezione: ");
        txt = str.next();
        alunno1.sezione = txt.charAt(0);
        
        System.out.print("Inserire giorno di nascita: ");
        data1.giorno = str.nextInt();
        System.out.print("Inserire mese di nascita: ");
        data1.mese = str.nextInt();
        System.out.print("Inserire anno di nascita: ");
        data1.anno = str.nextInt();
        
        System.out.println("\n\nAlunno: " + alunno1.cognome + " " + alunno1.nome);
        System.out.println("Classe: " + alunno1.classe + alunno1.sezione);
        System.out.println("Data di nascita: " + data1.giorno + "/" + data1.mese + "/" + data1.anno);
    }
    
}
