import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner ler = new Scanner(System.in);
		
		//tam. vetor
		int n = 5;
		//declaração e instanciacao
		int x[] = new int[n];
		int i;
		
		for(i = 0; i < n; i++){
		    
		    System.out.printf("%d° item de %d = ", (i + 1), n);
		    x[i] = ler.nextInt();
		    
		}
		
		System.out.println();
		
		int soma = 0;
		for(i = 0; i < n; i++){
		    
		    System.out.printf("x[%d] = %d\n", i, x[i]);
		    
		    soma = soma + x[i];
		    
		}
		
		System.out.printf("Soma = %d\n", soma);
		
    	 float media = (soma/n);
		
		System.out.printf("Media de notas = %.1f\n", media);
		
	}
}
