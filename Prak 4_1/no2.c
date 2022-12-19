#include <stdio.h>
// No 2 PRAK 4_1
int main()
{
    float bil, a ;

    printf("\t\tTRIANGULAR\n\n") ;
    printf("Masukkan bilangan : ") ;
    scanf("%f",&bil) ;
    printf("1") ;

    for(a = 2 ; a <= bil ; a = a + 1 ) 
    {
        printf(" + %.0f",a) ;
    }

}