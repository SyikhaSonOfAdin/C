#include <stdio.h>
// Tugas no 3 Prak 4_2
int main()
{
    int a = 0 ;
    float total = 0 , bil, rata, maks = 0, min = 9999999 ;
    char input ;
    do
    {
        a = a + 1 ;
        printf("Masukkan bil ke-%i : ",a) ;
        scanf("%f", &bil ) ;
        total = total + bil ;
        rata = total / a ;
        if( bil > maks )
            maks = bil ;
        if( bil < min )
            min = bil ;
        printf("Mau memssukkan bilangan lagi [y/t] ? ") ;
        scanf("%s", &input) ;
    } while (input == 'y' || input == 'Y' );
    printf("Total bilangan %.0f\nRata rata bilangan %.2f\nNilai maksimum %.0f\nNilai minimum %.0f\n ", total, rata, maks, min ) ;
    
}