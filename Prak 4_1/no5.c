#include <stdio.h>
// No 5 PRAK 4_1
int main() 
{
    int bil, a ;
    printf("\t\tBILANGAN GANJIL\n\n") ;
    printf("Masukkan bilangan bulat : ") ;
    scanf("%i",&bil ) ;
    for( a = 1 ; a <= bil ; a = a + 2)
    {
        printf("%i\n", a ) ;
    }
}