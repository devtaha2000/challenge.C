#include <stdio.h>
#include<stdlib.h>
int main()
{
    float Mile ;
    float Km  ;
  
    printf("ecrire la distance en Mile : ") ;
    scanf("%f",&Km) ;
    Mile = Km*1.609 ;
    printf("la distance en km : %f " , Mile) ;
   

    return 0;
}