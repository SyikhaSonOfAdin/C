#include <stdio.h>
// No 2 PRAK 3_2
int main()
{
    int option ;
    printf("\t\tKALKULATOR\n\n") ;
    printf("\t1. Penjumlahan (+)\n\t2. Pengurangan (-)\n\t3. Perkalian (x)\n\t4. Pembagian (/)\n ") ;
    printf("\tPilihan :") ;
    scanf("%i",&option) ;
    if( option == 1 ) 
    {
        float bil1, bil2, total ;
        printf("\n\n") ;
        printf("\t\tPENJUMLAHAN\n") ;
        printf("\tMasukkan bilangan 1 :") ;
        scanf("%f",&bil1) ;
        printf("\tMasukkan bilangan 2 :") ;
        scanf("%f",&bil2) ;
        total = bil1 + bil2 ;
        printf("\t%.2f + %.2f = %.2f",bil1, bil2, total) ;
    }
    if( option == 2 )
     {
        float bil1, bil2, total ;
        printf("\n\n") ;
        printf("\t\tPENGURANGAN\n") ;
        printf("\tMasukkan bilangan 1 :") ;
        scanf("%f",&bil1) ;
        printf("\tMasukkan bilangan 2 :") ;
        scanf("%f",&bil2) ;
        total = bil1 - bil2 ;
        printf("\t%.2f - %.2f = %.2f",bil1, bil2, total) ;
    }
    if( option == 3 )
     {
        float bil1, bil2, total ;
        printf("\n\n") ;
        printf("\t\tPERKALIAN\n") ;
        printf("\tMasukkan bilangan 1 :") ;
        scanf("%f",&bil1) ;
        printf("\tMasukkan bilangan 2 :") ;
        scanf("%f",&bil2) ;
        total = bil1 * bil2 ;
        printf("\t%.2f x %.2f = %.2f",bil1, bil2, total) ;
    }
    if( option == 4 )
     {
        float bil1, bil2, total ;
        printf("\n\n") ;
        printf("\t\tPEMBAGIAN\n") ;
        printf("\tMasukkan bilangan 1 :") ;
        scanf("%f",&bil1) ;
        printf("\tMasukkan bilangan 2 :") ;
        scanf("%f",&bil2) ;
        total = bil1 / bil2 ;
        printf("\t%.2f / %.2f = %.2f",bil1, bil2, total) ;
    }
}