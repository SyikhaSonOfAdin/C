#include <stdio.h>

int main()
{
    int N = 3, bil = 1, i = 0, j = 0 ;
    while( i < N-1 )
    {
        while( j <= i )
        {
            printf("%i", bil) ;
            bil = bil + 1 ;
            j = j + 1 ;
        }
        printf("\n") ;
        i = i + 1 ;
    }
}