#include <stdio.h>
#define MAKS 2

int main()
{
    int arrayA[MAKS][MAKS], arrayB[MAKS][MAKS], arrayC[MAKS][MAKS] ;
    int loop1, loop2 ;
    int initial_1 = 1, initial_2 = 1 ;
    for( loop1 = 0 ; loop1 <= MAKS - 1 ; loop1 = loop1 + 1 )
    {
        printf("\nMasukkan bilangan ke-%i Array A : ", initial_1) ;
        scanf("%i", &arrayA[loop1][loop1]) ;
        printf("\nMasukkan bilangan ke-%i Array B : ", initial_1) ;
        scanf("%i", &arrayB[loop1][loop1]) ;
        arrayC[loop1][loop1] = arrayA[loop1][loop1] + arrayB[loop1][loop1] ;
        initial_1 = initial_1 + 3 ;

        for( loop2 = 1 ; loop2 <= MAKS ; loop2 = loop2 + 1 )
        {
            initial_2 = initial_2 + 1 ;
            if( initial_2 > 3 )
            {
                break;
            }
            printf("\nMasukkan bilangan ke-%i Array A : ", initial_2) ;
            scanf("%i", &arrayA[loop1][loop2]) ;
            printf("\nMasukkan bilangan ke-%i Array B : ", initial_2) ;
            scanf("%i", &arrayB[loop1][loop2]) ;
            arrayC[loop1][loop2] = arrayA[loop1][loop2] + arrayB[loop1][loop2] ;
        }
    }
    printf("\nArray A : \n") ;
    printf("|%i %i|\n|%i %i|\n", arrayA[0][0], arrayA[0][1], arrayA[1][0], arrayA[1][1]  );

    printf("\t+\nArray B : \n") ;
    printf("|%i %i|\n|%i %i|\n", arrayB[0][0], arrayB[0][1], arrayB[1][0], arrayB[1][1] );

    printf("\nMenghasilkan \n") ;
    printf("|%i %i|\n|%i %i|\n", arrayC[0][0], arrayC[0][1], arrayC[1][0], arrayC[1][1] );
}