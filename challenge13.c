#include <stdio.h>

int main()
{
    int NB ;
    printf("donner un nmbre decimal :");
    scanf("%d",&NB);
    printf("le nombre en octal est : %o \n", NB );
    printf("le nombre en hexadécimal est : %x \n", NB );

    return 0;
}