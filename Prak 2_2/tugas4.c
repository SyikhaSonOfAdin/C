#include <stdio.h>
// SOAL NO.1 PRAK 2_2
int main()
{
    int celsius ;
    float farenheit ;
    printf("CONVERT FROM C TO F\n") ;
    printf("Input (c) : ") ;
    scanf("%i",&celsius) ;
    farenheit = celsius * 1.8 + 32 ;
    printf("%.2f",farenheit) ;
}