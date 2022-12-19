#include <stdio.h>

int main() 
{
    float bil1, bil2, hasil ;

    printf("Masukkan bilangan pertama :") ;
    scanf("%f",&bil1) ;
    printf("Masukkan bilangan kedua :") ;
    scanf("%f",&bil2) ;
    hasil = bil1 / bil2 ;

   if( bil2 == 0 ) 
   {
    printf("Tidak bisa dibagi dengan 0") ;
   }
   if( bil2 != 0) 
   {
     printf(" %.0f / %.0f = %.3f",bil1, bil2, hasil) ;
   }
}