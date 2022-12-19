#include <stdio.h>
// No 6 PRAK 4_1
int main()
{
    int bil, a;

    printf("\t\tMEMBUAT PROGRAM\n\n") ;
    printf("Masukkan bilangan bulat : ") ;
    scanf("%i",&bil) ;
    for( a = 1 ; a <= bil ; a = a + 1)
    {  
        if( a % 2 == 1 )
        {
            printf(" %i ",a) ;
        }
         
        if( a % 2 == 0 ) 
        {
            printf(" -%i ",a) ;
        }
    }
}