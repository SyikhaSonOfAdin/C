#include <stdio.h>
// SOAL NO.2 PRAK 2_1
int main()
{
    float idr, usd ;
    char opsi ;

    printf("\t\tCONVERT FROM USD TO IDR\n\n") ;
    printf("Input USD : ") ;
    scanf("%f",&usd) ;
    printf("Anda ingin memasukkan nilai tukar? (y/n) ") ;
    scanf("%s",&opsi ) ;

    if( opsi == 'y')
    {
        float nilai ;
        printf("Masukkan nilai tukar : ") ;
        scanf("%f",&nilai ) ;
        idr = usd * nilai ;
        printf("$ %.1f = Rp %.1f",usd,idr); 
    }
    
    if( opsi == 'n')
    {
        idr = usd * 11090 ;
        printf("$ %.1f = Rp %.1f",usd,idr);
    }
    
}