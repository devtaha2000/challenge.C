#include <stdio.h>
#include <math.h>
int main()
{
    char tab[3] ;
    printf("veuillez entrer un nombre entier a trois chiffres :");
    scanf("%s",&tab);
    printf("le nombre inverse est : %c%c%c ", tab[2],tab[1],tab[0] );
    
    return 0;