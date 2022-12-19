#include <stdio.h>

int main()
{
    int himpunan[] = { 0, 0 } ;
    int bil1, bil2, a, total ;
    total = 0 ;

    printf("\tMasukkan bil pertama : ") ;
    scanf("%i",&bil1 ) ;
    printf("\tMasukkan bil kedua : ") ;
    scanf("%i",&bil2 ) ;
    
    himpunan[0] = bil1 ;
    himpunan[1] = bil2 ;
    
    for(a = himpunan[0] ; a <= himpunan[1] ; a = a + 1 )
    {
        printf("%i\n",a );
        total = total + a ;
    }
    printf("Total = %i",total ) ;

}