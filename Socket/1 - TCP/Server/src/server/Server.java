package server;

import java.net.*;
import java.io.*;

public class Server {

    public static void main(String[] args) throws IOException {
        ServerSocket sSocket;
        Socket connessione;
        
        int porta = 3333;           //Numero della porta
        
        InputStreamReader in;
        BufferedReader sIN;
        
        OutputStream out;
        PrintWriter sOUT;
        
        sSocket = new ServerSocket(porta);      //Creazione della socket
        
        System.out.println("In attesa di connessione");
        
        connessione = sSocket.accept();
        
        System.out.println("Connessione stabilita");
        
        in = new InputStreamReader(connessione.getInputStream());
        sIN = new BufferedReader(in);
        
        out = connessione.getOutputStream();
        sOUT = new PrintWriter(out);
                
        //Servizio offerto al client
        String str = sIN.readLine();                    //Ricezione delle stringa dal client
                
        str = str.toUpperCase();                        //Modifica della stringa
                
        sOUT.println(str);                              //Invio della stringa al client
        
        //Chiusura connessione
        sOUT.close();
        connessione.close();
        
        System.out.println("Connessione chiusa");
    }
    
}