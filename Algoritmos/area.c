#include <stdio.h>
#include<math.h>
 
// Algoritmo para calcular a área de um circulo dado o raio
int main( ) 
{
    // Declaração de variaveis 
     
     float raio, area;
     
     //solicitar informações para o usuário 
     
     printf("Digite o valor do raio do círculo:  ");
     scanf("%f", &raio);
     
     // Executar operações
     
     area = M_PI * pow(raio, 2);
    // valor de PI ja calculado com essa formula M_PI 
    
    // Exibir as informações para o usuário
    
    printf("A área do círculo é: %.2f", area);
    
    return 0;
}