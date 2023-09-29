//VESCIO RICCARDO 4H
//Sistema di login
package pkg092.sistemadilogin;

import java.io.*;
import java.util.Scanner;

public class SistemadiLogin {

    public static void main(String[] args) throws IOException{
        Scanner str = new Scanner(System.in);       //Lettura da tastiera
        
        String username, password, aux1, aux2, aCapo;
        boolean usercorretto, pswcorretto, uguale, p;
        char operazione;
        
        aCapo = System.getProperty("line.separator");
        
        do {
            FileReader file = new FileReader("dati.txt");
            Scanner in = new Scanner(file);         //Lettura da file txt
            
            BufferedWriter out = null;
            out = new BufferedWriter(new FileWriter("dati.txt", true));      //Scrittura su file txt
            
            System.out.println("+------------------+");
            System.out.println("|    Login -> L    |");
            System.out.println("|Registrazione -> R|");
            System.out.println("|   Uscita -> X    |");
            System.out.println("+------------------+");
            
            System.out.print("Inserire l'operazione da effettuare: ");
            operazione = (str.next()).charAt(0);
            
            if (operazione == 'L' || operazione == 'l') {
                System.out.println("+---------------ACCESSO---------------+");
                System.out.print("  Username: ");
                username = str.next();
                System.out.print("  Password: ");
                password = str.next();
        
                usercorretto = false;
                pswcorretto = false;
        
                while (in.hasNext() && usercorretto == false && pswcorretto == false) {
                    aux1 = in.next();
                    
                    aux2 = in.next();
            
                    if (aux1.equals(username)) {
                        usercorretto = true;
                    }
            
                    if (aux2.equals(password)) {
                        pswcorretto = true;
                    }
                }
        
                if (usercorretto == true && pswcorretto == true) {
                    System.out.println("\n  ACCESSO EFFETTUATO CORRETTAMENTE");
                    System.out.println("  Benvenuto " + username);
                }
                else {
                    System.out.println("\nUsername o password non corretto");
                }
                
                System.out.println("\n");
            }
            
            if (operazione == 'R' || operazione == 'r') {
                System.out.println("+------------REGISTRAZIONE------------+");
                System.out.print("  Username: ");
                username = str.next();
                
                p = true;
                uguale = false;
                
                while (in.hasNext() && uguale == false) {
                    aux1 = in.next();
                    
                    if (p == true) {
                        if (aux1.equals(username)) {
                            uguale = true;
                        }
                    }
                    
                    p = !p;
                }
                
                if (uguale == true) {
                    System.out.println("Username già occupato");
                }
                else {
                    System.out.print("  Password: ");
                    password = str.next();
                    
                    out.write(username + " " + password + aCapo);
                    
                    System.out.println("REGISTRAZIONE EFFETTUATA CORRETTAMENTE");
                }
                
                System.out.println("\n");
            }
            
            
            if (operazione != 'L' && operazione != 'l' && operazione != 'R' && operazione != 'r' && operazione != 'X' && operazione != 'x') {
                System.out.println("Operazione non supportata\n");
            }
                        
            file.close();
            
            out.flush();
            out.close();
            
        } while (operazione != 'X' && operazione != 'x');
        
    }
    
}
