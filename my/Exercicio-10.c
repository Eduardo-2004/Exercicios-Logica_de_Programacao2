#include <stdio.h>

int main(){
    int vet[10], i, c = 0, nota = 0, total;

     for(i = 0; i < 10; i++){
            c = i + 1;
            printf("INSIRA A %iÂ° NOTA: ",c);
            scanf("%i",&vet[i]);
           
    }
     for(i = 0; i < 10; i++){
            nota += vet[i];
            total = nota / 10;
            
        }
    for (i = 0; i < 10; i++)
    {
            if(vet[i] == total){
                printf("Possui o mesmo valor da média \n");
                printf("A nota é: %i",vet[i]);
                return 0;
            }else{
                printf("NÃƒO POSSUI O MESMO VALOR NAS NOTAS E NA MEDIA FINAL");
                return 0;
            }
    }
    
}