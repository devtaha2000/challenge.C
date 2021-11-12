#include <stdio.h>
#include<stdlib.h>
int main()
{
    float F ;
    float C ;
    printf("la température en Fahrenheit : ") ;
    scanf("%f",&F) ;
    C = (F-32)/1.8 ;
    printf("la température en degré Celsius : %f " , C) ;
   

    return 0;
}