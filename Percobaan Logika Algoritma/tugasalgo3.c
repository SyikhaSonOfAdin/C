#include <stdio.h>

int main() 
{
    int input, a, b = 0 ;
    printf("Berapa banyak deret yang ingin anda tampilkan ? ") ;
    scanf("%i",&input) ;
    
   for( a = 1 ; a <= input ; a = a + 1  )
    {
        b = b + a ;
       printf(" %i ", b ) ;
    }
}