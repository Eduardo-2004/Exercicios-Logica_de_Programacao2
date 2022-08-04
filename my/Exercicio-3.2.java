import java.util.Scanner;

import javax.swing.JOptionPane;


public class Main
{
    static int n1, n2;
	public static void main(String[] args) {
		
		Scanner ler = new Scanner (System.in);
		
        System.out.println("Digite o primeiro número: ");
        n1 = ler.nextInt();
        
        System.out.println("Digite o segundo número: ");
        n2 = ler.nextInt();
		
		 if(n1 < n2){
            for(int i = n1; i <= n2; i++){
                System.out.println("Primeiro número até o segundo::  "+i);
            }
        }else if(n1 > n2){
            for(int j = n2; j <= n1; j++){
                System.out.println("Segundo número até o primeiro: "+j);
             }
        }
        else if(n1 == n2){
            System.out.println("Igualdade entre os dois valores");
        }
		
	}
}
