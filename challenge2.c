#include <stdio.h>
#include<stdlib.h>
int main()
{
    float F ;
    float c ;
    const float c1 = 1.8 ;
    const float c2 = 32 ;
    printf("ecrire la température en Fahrenheit : ") ;
    scanf("%f",&F) ;
    c = (F-c1)/c2 ;
    printf("la température  en degré Celsius : %f " , c) ;
   

    return 0;
}