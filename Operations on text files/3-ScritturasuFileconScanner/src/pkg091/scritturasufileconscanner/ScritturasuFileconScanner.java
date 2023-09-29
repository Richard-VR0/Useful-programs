//VESCIO RICCARDO 4H
//Lettura dei dati da un file di testo e scrittura di dati su un file di testo
package pkg091.scritturasufileconscanner;

import java.io.*;
import java.util.Scanner;

public class ScritturasuFileconScanner {

    public static void main(String[] args) throws IOException{
        Scanner in = new Scanner (System.in);
        
        String pathoutput = "";             //Percorso del file
        String nomeoutput = "output.txt";   //Nome del file
        
        int i;
        int n = 5;  //Numero di parole da inserire
        
        String stringa1, aCapo;
        
        nomeoutput = pathoutput + nomeoutput;
        
        aCapo = System.getProperty("line.separator");
        
        FileWriter out = new FileWriter(nomeoutput);
        
        for (i = 0; i < n; i++) {
            System.out.print("Inserisci una parola: ");
            stringa1 = in.next();
            out.write(stringa1 + aCapo);
        }
        
        out.flush();    //Svuota il buffer
        out.close();    //Chiude il file
    }
    
}
