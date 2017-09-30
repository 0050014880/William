/*
 Quadrado - Escrever um programa que mostre a seguinte figura no alto da tela.
XXXXX
X   X
X   X
X   X
XXXXX
*/

#include <stdio.h>
int main()
{
    int linhas, i,j;
    printf("\nEntre com um numero:\t");
    scanf("%d", &linhas);
    
    
    for(i=1; i<=linhas; i++)
             for(j=1; j<=linhas; j++)
   
           printf("X");
           printf("\n");
 
           
       
      
        
    

   
    
    system("pause");
    return 0;
}
