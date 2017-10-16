#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main( ) {
    char nome [20];
    int tam, i, voltar;
    do {
    printf("Qual seu nome?\t");
    scanf("%s", nome );
    
    tam = strlen(nome);
    
    printf("\nBoa noite %s\t\n", nome);
    printf("\nO seu nome tem %d caracteres\n", tam),
    printf("\nA primeira letra do seu nome eh %c \n\n", nome[0]);
    printf("Seu nome na vertical eh:\n\n");  
    
    for(i=0;i<tam;i++) {
    
                   
    printf("\n%c", nome[i]);
}
printf ("\npressione 1 para repetir");
scanf("%d", &voltar);
}   
    
    while(voltar==1);

                     
    printf("\n\n\n");
    system("pause");
    return 0;
}
