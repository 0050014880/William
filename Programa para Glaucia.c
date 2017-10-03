#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    int soma=0,maior=0,v[4],i=0;
   
    printf("Digite 4 numeros \n");
    while(i<4){
        scanf("%d",&v[i]);
        if(maior<v[i]){
            maior=v[i];
        }
        i++;
    }
    for(i=0;i<4;i++){
        if(v[i]<maior)
            soma=soma+v[i];
       
    }
    printf ("A soma dos três menores é de %d",soma);
   
    return 0;
}
