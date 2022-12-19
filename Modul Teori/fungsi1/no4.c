#include <stdio.h>

int ganjil( int input )
{
    if( input % 2 == 0 )
    {
        return 0 ;
    }
    else
    {
        return 1 ;
    }
}

int main()
{
    int hasil, input ;
    printf("Jika hasil 1 adalah ganjil apabila hasil 0 adalah genap : ") ;
    scanf("%i", &input ) ;
    hasil = ganjil(input) ;
    printf("Result : %i", hasil ) ;
}