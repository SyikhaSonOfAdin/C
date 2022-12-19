#include <stdio.h>

int prima( int bil )
{
    int loop1 = 1, pembagi = 1, point = 0 ;
    while ( loop1 <= bil )
    {
        if( bil % pembagi == 0 )
        {
            point = point + 1 ;
        }
        pembagi = pembagi + 1 ;
        loop1 = loop1 + 1 ;
    }
    if( point == 2 )
    {
        return 1 ;
    }
    else 
    {
        return 0 ;
    }
}
int main()
{
    int input, hasil ;
    printf("Masukkan input bilangan : ") ;
    scanf("%i", &input) ;
    hasil = prima( input ) ;
    printf("%i", hasil) ;
}