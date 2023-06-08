#include <stdio.h>
int main (void){
    int integerVar=100;
    float floatingVar=33.79;
    double doubleVar=8.44e+11;
    char charVar='W';
    _Bool boolVar=0;
    printf("IntegerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("dobuleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);
    return 0;
}