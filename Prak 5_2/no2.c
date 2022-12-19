#include <stdio.h>
// FUNGSI FAKTORIAL
long int faktorial( int input ){
    int loop1, initiation = 1 ;
    for( loop1 = input ; loop1 >= 1 ; loop1 = loop1 -1)
    {
        initiation = initiation * loop1 ;
    }
    return initiation ;
}

int main()
{
    int input, function ;
    printf("Masukkan bil yang akan difaktorial : ");
    scanf("%i", &input) ;
    function = faktorial(input) ;
    printf("Hasil dari faktorial %i adalah : %i", input, function) ;
}