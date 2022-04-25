#include <stdio.h>

int checar (int array);

int main()
{
    int array;
    
    printf("Digite um conjunto de numeros: \n");
    scanf("%d", &array);
    
    if (array == checar(array)){
        printf("TRUE! Esse numero é um palindromo");
    }
    else{
        printf("FALSE! Esse numero não é um palindromo");
    }
}

int checar(int array){
    
    static int soma = 0;
    
    if(array == 0){
        return soma;
    }
        else{
            soma = soma * 10 + (array % 10);
            checar(array/10);
            return soma;
        }
}

