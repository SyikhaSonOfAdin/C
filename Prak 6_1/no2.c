#include <stdio.h>

int main()
{
    int fibArray[500] = { 0, 1 } ;
    int loop1, input1 ;

    printf("Berapa banyak deret yang akan ditampilkan? : ") ;
    scanf("%i", &input1 ) ;
    printf("%i", fibArray[0]) ;
    for( loop1 = 1 ; loop1 <= input1 - 1 ; loop1 = loop1 + 1 )
    {
        printf(", %i", fibArray[loop1] ) ;
        fibArray[loop1 + 1] = fibArray[loop1] + fibArray[loop1 - 1] ;
    }
}