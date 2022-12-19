#include <stdio.h>
// No 7 PRAK 4_1
int main()
{
    int bil, a ;
    printf("\t\tFAKTORIAL\n\n") ;
    printf("Masukkan bilangan bulat :") ;
    scanf("%i", &bil) ;
    printf("1") ;
    for(a = 2 ; a <= bil ; a = a + 1 )
    {
        
        printf(" * %i",a) ;
    }
}