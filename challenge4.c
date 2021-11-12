#include <stdio.h>
#include<stdlib.h>
int main()
{
    float Mile ;
    float Metre ;
  
    printf("ecrire la distance en Mile : ") ;
    scanf("%f",&Metre) ;
    Mile = Metre* 1000 *1.609 ;
    printf("la distance en metre : %f " , Mile) ;
   

    return 0;
}