#include <stdio.h>

int main()
{
    int a,b,c,d ;
    printf(" ecrire a :") ;
    scanf("%d",&a) ;
    printf(" ecrire b :") ;
    scanf("%d",&b) ;
    printf(" ecrire c :") ;
    scanf("%d",&c) ;
    printf(" ecrire d :") ;
    scanf("%d",&d) ;
    
    printf("la somme :%d \n", a+b+c+d) ;
    printf("la moyenne :%d", (a+b+c+d)/4 ) ;

    return 0;
}