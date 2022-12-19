#include <stdio.h>
#include <string.h>
#define MAKS 200

struct chicken{

};

int main()
{
    int loop1, loop2 = 0, jumlah[MAKS], total[MAKS] ;
    char next ;
    char input1[MAKS] ; 
    char *jenis[MAKS] ;

    printf("Toko GFC-Gerobak Fried Chicken\n\nDAFTAR HARGA\n");
    printf("Kode\tJenis\tHarga Per Potong\n");
    printf("D   \tDada\tRp. 5000.00\n");
    printf("P   \tPaha\tRp. 4000.00\n");
    printf("S   \tSayap\tRp. 3000.00\n\n");
    printf("Harga belum termasuk pajak 10%%\n\nMasukkan Pesanan Anda");

    while( next != 't' )
    {
        printf("\n\nPesanan ke-%i",loop2 + 1 ) ;
        printf("\nJenis (D/P/S) \t: ") ;
        scanf("%c", &input1[loop2]) ;
        printf("Jumlah        \t: ") ;
        scanf("%i", &jumlah[loop2] ) ;
        fflush(stdin) ;
        printf("Ada lagi (y/t)? : ") ;
        scanf("%s", &next ) ;
        loop2 = loop2 + 1 ;
        fflush(stdin) ;
    }
    
    
    for( loop1 = 0 ; loop1 <= 11 ; loop1 = loop1 + 1 )
    {
        if( input1[loop1] == 'd' || 'D')
        {
            total[loop1] = jumlah[loop1] * 5000 ;
            strcpy(jenis[loop1], "DADA") ;
        }
        else if( input1[loop1] == 'p' || 'P')
        {
            total[loop1] = jumlah[loop1] * 4000 ;
            strcpy(jenis[loop1], "PAHA") ;
        }
        else if( input1[loop1] == 's' || 'S')
        {
            total[loop1] = jumlah[loop1] * 3000 ;
            strcpy(jenis[loop1], "SAYAP") ;
        }
        printf("Total harga %s : Rp. %i \n", jenis[loop1], total[loop1]) ;
    }
    
}