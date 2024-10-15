package server;

import java.net.*;
import java.io.*;

public class Server {

    public static void main(String[] args) throws SocketException, IOException {
        int porta = 2000;
        
        DatagramSocket serverSocket = new DatagramSocket(porta);
        
        byte[] ricevi = new byte[1024];
        byte[] invia = new byte[1024];
        
        while (true) {
            DatagramPacket riceviPacchetto = new DatagramPacket(ricevi, ricevi.length);
            
            serverSocket.receive(riceviPacchetto);
            
            String dato = new String(riceviPacchetto.getData());
            
            InetAddress indirizzoIP = riceviPacchetto.getAddress();
            
            int port = riceviPacchetto.getPort();
            
            String maiuscolo = dato.toUpperCase();
            
            invia = maiuscolo.getBytes();
            
            DatagramPacket inviaPacchetto = new DatagramPacket(invia, invia.length, indirizzoIP, port);
            
            serverSocket.send(inviaPacchetto);
        }
    }
    
}
