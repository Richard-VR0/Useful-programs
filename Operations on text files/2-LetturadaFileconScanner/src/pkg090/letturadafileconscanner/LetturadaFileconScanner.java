//VESCIO RICCARDO 4H
//Lettura dei dati da un file di testo e scrittura di dati su un file di testo
package pkg090.letturadafileconscanner;

import java.io.*;
import java.util.Scanner;

public class LetturadaFileconScanner{

    public static void main(String[] args) throws IOException {
        String stringa2;
        String str = "";
        
        String pathinput = "";              //Percorso del file
        String nomeinput = "input.txt";     //Nome del file
        
        nomeinput = pathinput + nomeinput;
        
        FileReader file = new FileReader(nomeinput);
        Scanner in = new Scanner(file);
        
        while (in.hasNextLine()) {
            stringa2 = in.next();
            
            str += stringa2 + " ";
        }
        
        System.out.println("Stringa letta: " + str);
        
        file.close();   //Chiude il file
    }
    
}
