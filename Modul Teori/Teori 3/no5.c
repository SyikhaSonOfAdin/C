#include <stdio.h>

int main()
{
    int tahun, a ;
    printf("\t\tMenentukan Tahun Kabisat\n\n") ;
    printf("\tMasukkan tahun :") ;
    scanf("%i",&tahun) ;
    a = tahun % 4 ;
    if( a == 0  )
    {
        printf("\t%i merupakan tahun kabisat ",tahun ) ;
    }
    else
    {
        printf("\t%i bukan tahun kabisat ", tahun ) ;
    }
}