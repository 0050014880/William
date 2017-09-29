#include <stdio.h>

int main () {
    
    int i, a ;
    
    printf("\nEntre com um numero:");    
    scanf("%d", &a);
    
    for(i=0;i<=a;i++) {
    
    a = (i-1)+i;
    
    printf("%d", a);
    }
   
   system ("pause");
}
