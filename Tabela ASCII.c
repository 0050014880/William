#include <stdio.h>

int main () {
    
    int i;
    
    printf("\nTabela ASCII");
    printf("\n-----------");
    printf("\nDec    Char");
    
    for(i=33;i<=127;i++) {
    printf("\n%d\t%c", i, i);
}
system("pause");
return 0;
}
