#include <stdio.h>
#define MAKS 25

int main()
{
    int maxSeeker[MAKS] ;
    int input1, input2, loop1, biggest = 0 ;
    printf("Berapa banyak yang ingin anda masukkan? ") ;
    scanf("%i", &input1) ;
    for(loop1 = 0 ; loop1 <= input1 - 1 ; loop1 = loop1 + 1)
    {
        printf("Masukkan bilangan ke-%i : ", loop1 + 1) ;
        scanf("%i", &input2) ;
        maxSeeker[loop1] = input2 ;
        if( maxSeeker[loop1] > biggest )
        {
            biggest = maxSeeker[loop1] ;
        }
    }

    printf("Bilangan terbesar adalah = %i", biggest) ;
}