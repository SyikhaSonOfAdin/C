#include <stdio.h>

int main()
{
    int loop1, array1[] = {2123, 4521, 5324, 6743, 867, 1334} ;
    printf("\t\tMengakses Array\t\n\n") ;
    for( loop1 = 0 ; loop1 <= 5 ; loop1 = loop1 + 1 )
    {
        printf("Array[%i] = %i\n", loop1, array1[loop1]) ;
    }
}