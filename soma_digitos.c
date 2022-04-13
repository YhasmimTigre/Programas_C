/*
Problema:  Faça um programa que recebe um número inteiro não negativo n e imprime a
soma dos dígitos que esse número possui. O inteiro n nunca vai possuir mais do
que 9 dígitos.
*/
#include <stdio.h>
int main()
{
    int entrada = 0, num, soma = 0, i;

    printf("digite numeros: ");

    scanf("%d", &entrada);
    

    while(entrada > 0){
        i = entrada%10;
        soma += i;
        entrada /= 10;
    }
    printf("a soma dos numeros é: %d\n", soma);
    return 0; 
}
