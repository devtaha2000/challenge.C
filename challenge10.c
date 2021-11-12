#include <stdio.h>

int main()
{
    const float PI=3.14 ;
    float r , c ;
    printf("le rayon : ");
    scanf("%f",&r) ;
    c = 2*PI*r ;
    printf(" la Circonférence d'un cercle : %f",c) ;

    return 0;
}