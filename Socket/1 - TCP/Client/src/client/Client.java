package client;

import java.net.*;
import java.io.*;
import java.util.Scanner;

public class Client {

    public static void main(String[] args) throws IOException {
        Scanner str = new Scanner(System.in);
        
        Socket connessione;
        
        String server = "localhost";    //Indirizzo IP del server
        int porta = 3333;               //Numero della porta
        
        InputStreamReader in;
        BufferedReader sIN;
        
        OutputStream out;
        PrintWriter sOUT;
        
        connessione = new Socket(server, porta);    //Creazione della socket
        
        System.out.println("Connessione aperta");
        
        in = new InputStreamReader(connessione.getInputStream());
        sIN = new BufferedReader(in);
        
        out = connessione.getOutputStream();
        sOUT = new PrintWriter(out);
        
        //Dati dal/verso server
        System.out.print("Inserisci la stringa da inviare al server:");
        String stringa = str.nextLine();                        //Stringa da inviare
        
        sOUT.println(stringa);                          //Invio della stringa
        sOUT.flush();
        
        stringa = sIN.readLine();          //Ricezione della stringa
        
        System.out.println("Stringa:" + stringa); //Ouput della stringa modificata
        
        //Chiusura connessione
        sIN.close();
        connessione.close();
        
        System.out.println("Connessione chiusa");
    }
    
}