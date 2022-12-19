#include <stdio.h>
// PERBANDINGAN
int perbandingan( int bil1 , int bil2 )
{
    if( bil1 > bil2 )
    {
        return printf("%i lebih besar dari %i", bil1, bil2 ) ;
    }
    else if( bil2 > bil1)
    {
        return printf("%i lebih besar dari %i", bil2, bil1 ) ;
    }
    else if ( bil1 = bil2 )
    {
        return printf("%i sama besarnya dengan %i", bil1, bil2 ) ;
    }
    
}

int main()
{
    int bil1, bil2 ;
    char hasil ;
    printf("Masukkan bilangan pertama ") ;
    scanf("%i", &bil1 ) ;
    printf("Masukkan bilangan ke dua ") ;
    scanf("%i", &bil2) ;
    hasil = perbandingan( bil1, bil2 ) ;
    printf("%s", hasil) ;
}