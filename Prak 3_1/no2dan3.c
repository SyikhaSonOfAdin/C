#include <stdio.h>

int main() 
{
    float belanja, potongan, total ;

    printf("Masukkan jumlah total belanja : Rp") ;
    scanf("%f", &belanja) ;
    if (belanja >= 100000) 
    {
        potongan = 0.05 * belanja ;
        total = belanja - potongan ;
        
        printf("Potongan Rp %.1f\n", potongan) ;
        printf("Total pembelian Rp %.1f",total) ;

    }
    
    if (belanja < 100000) 
    {
        
        printf("Potongan  Rp-\n") ;
        printf("Total pembelian  Rp%.0f",belanja) ;
    }
}