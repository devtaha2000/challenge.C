#include <stdio.h>
#include <math.h>

int main()
{
    int X1,X2,Y1,Y2 ;
    float MN ;
    printf("ecrire X1 :") ;
    scanf("%d",&X1);
    printf("ecrire Y1 :") ;
    scanf("%d",&Y1);
    printf("ecrire X2 :") ;
    scanf("%d",&X2);
    printf("ecrire Y2 :") ;
    scanf("%d",&Y2);
    
    MN = sqrt(pow(X2-X1,2) + pow(Y2-Y1,2));
    printf("la distance entre deux points donnés: %f", MN);

    return 0;
}