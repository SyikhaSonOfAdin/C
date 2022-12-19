#include <stdio.h>
// No 2 PRAK 4_2
int main()
{
    int a = 0 ;
    float  bil, total = 0 ;
    char input ;
    do
    {
        a++ ;
        printf("Masukkan angka ke-%i : ",a) ;
        scanf("%f", &bil) ;
        total = total + bil ;
        printf("Mau memasukkan data lagi [y/t] ?") ;
        scanf("%s", &input) ;
    } while (input == 'y' || input == 'Y') ;
    printf("Total bilangan = %.0f", total) ;

}