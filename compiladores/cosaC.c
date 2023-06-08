#include <stdio.h>

int main(void)
{
    char c;
    printf("Ingresa un solo caracter\n");
    scanf ("%c",&c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
        printf("Es un caracter alfabetico\n");
    else if(c>='0'&& c<='9')
        printf("Es un digito\n");
    else
        printf("es un caracter especial\n");
    return 0;
}