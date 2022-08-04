

//7 - Fazer um programa que lê um conjunto de 10 valores e os imprime ordenados.
public class Main
{
	public static void main(String[] args) {
		int vetor[] = {1, 76, 32, 543, 0, 87, 34, 90, 11, 45};
		int aux;
		
		// ord. do vetor em ord. crescente 
		for(int j = 0; j < vetor.length; j++){
		    for(int c = 0; c < vetor.length; c++){
		        if(vetor[j] < vetor[c]){
		            
		            aux = vetor[j];
		            vetor[j] = vetor[c];
		            vetor[c] = aux;
		            
		        }
		        
		    }
		    
		}
		
		for(int i = 0; i < vetor.length; i++){
		
		System.out.print(vetor[i] + " ");
		}

	}
}
