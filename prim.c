#include <stdio.h>
// Deret bilangan prima, kecuali bilangan tersebut antara 20 sd 50 
int main()
{
    int input, loop1, loop2, point ;
    printf("Masukkan berapa banyak bilangan yang ingin ditampilkan : ") ;
    scanf("%i", &input) ;

    for( loop1 = 1 ; loop1 <= input ; loop1 = loop1 + 1 )
    {
        for( loop2 = 1 ; loop2 <= loop1 ; loop2 = loop2 + 1 )
        {
            if( loop1 % loop2 == 0 )
            {
                point = point + 1 ;
            }
        }
        if( point == 2 )
        {
            if( loop1 >= 20 && loop1 <= 50 )
            {
                continue;
            }
            printf(" %i", loop1 ) ;
        }
        point = 0 ;
    }
}