#include <stdio.h>

int main(void)
{
    int i, traingularN;
    printf("Tabla triangular\n\n");
    printf("i suma de 1 número a i\n");
    printf("--- ------------------\n");
    traingularN =0;
    for(i=1; i<=10; i++){
        traingularN+=i;
        printf("%2i           %i\n",i,traingularN);
    }
    return 0;
}