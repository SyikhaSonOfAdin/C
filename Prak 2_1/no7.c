#include <stdio.h>
// SOAL NO.7 PRAK 2_1
int main() 
{
    int jari, luas ;
    const float PI = 3.14 ;
    printf("\t\tMENGHITUNG LUAS LINGKARAN\n\n") ;
    printf("Masukkan panjang jari jari :") ;
    scanf("%i",&jari) ;
    luas = PI * jari * jari ;
    printf("Luas lingkaran dengan jari jari %i adalah %i",jari ,luas) ;
}