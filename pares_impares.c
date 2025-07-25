#include <stdio.h>
#include <math.h>

void main()
{
    int numeros[10];
    int numerosPares = 0, numerosImpares = 0;
    
    while(1){
        for(int i = 0; i <= 10; i++){
            printf("Digite um numero de até %d: ", i);
            while(scanf("%d", &numeros[i]) != 1){
                printf("Digite somente números.\n\n");
                while(getchar() != '\n');
            }
        }
        
        printf("\n\nOs três primeiros 3 números pares são: ");
        for(int i = 0; i < 10; i++){
            if(numeros[i] %2==0){
                printf("%d ", numeros[i]);
                numerosPares++;
            }
            if(numerosPares == 3){
                break;
            }
        }
        
        printf("\n\nOs dois últimos números ímpares são: ");
        for(int i = 9; i >= 0; i--){
            if(numeros[i] % 2 != 0){
                printf("%d ", numeros[i]);
                numerosImpares++;
            }
            
            if(numerosImpares == 2){
                break;
            }
        }
        
        printf("\n");
        break;
        
    }
}