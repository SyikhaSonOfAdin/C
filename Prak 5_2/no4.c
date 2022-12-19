#include <stdio.h>


float radian( float derajat )
{
    const int PI = 3.14 ;
    return derajat / 180 * PI ; 
}

int main()
{
    int input ;
    float hasil ;
    printf("Masukkan besar derajat : ") ;
    scanf("%i", &input) ;
    hasil = radian(input) ;
    printf("%i derajat = %.2f rad", input, hasil) ;
}