#include <stdio.h>
// No 1 PRAK 3_1
int main()
{
    int bil ;

    printf("\t\tGANJIL GENAP\n\n") ;
    printf("\tMasukkan bilangan bulat :") ;
    scanf("%i",&bil) ;
    if( bil % 2 == 0 ) 
    {
        printf("\t%i adalah bilangan genap",bil) ;
    }
    if( bil % 2 == 1 ) 
    {
        printf("\t%i adalah bilangan ganjil",bil) ;

    }
}