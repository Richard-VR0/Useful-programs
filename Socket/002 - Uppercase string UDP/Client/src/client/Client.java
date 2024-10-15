package client;

import java.net.*;
import java.io.*;

public class Client {

    public static void main(String[] args) throws SocketException, UnknownHostException, IOException {
        int porta = 2000;
        
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        
        DatagramSocket clientSocket = new DatagramSocket();
        
        InetAddress indirizzoIP = InetAddress.getLocalHost();
        InetAddress.getByName("localhost");
        
        byte[] ricevi = new byte[1024];
        byte[] invia = new byte[1024];
        
        String dato = in.readLine();
        
        invia = dato.getBytes();
        
        DatagramPacket inviaPacchetto = new DatagramPacket(invia, invia.length, indirizzoIP, porta);
        
        clientSocket.send(inviaPacchetto);
        
        DatagramPacket riceviPacchetto = new DatagramPacket(ricevi, ricevi.length);
        
        clientSocket.receive(riceviPacchetto);
        
        String datoModificato = new String(riceviPacchetto.getData());
        
        System.out.println("Stringa modificata: " + datoModificato);
        
        clientSocket.close();
    }
    
}
