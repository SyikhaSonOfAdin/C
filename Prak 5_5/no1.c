#include <stdio.h>

float masukan( int input )
{
    int loop1 ;
    float initiation, total = 0 ;
    for( loop1 = 1 ; loop1 <= input ; loop1 = loop1 + 1 )
    {
        printf("Masukkan bilangan ke-%i : ", loop1 ) ;
        scanf("%f", &initiation ) ;  
        total = total + initiation ;
    }
    return (total) ;
}

float average( int banyak_data , float total_jumlah_data )
{
    float hasil = total_jumlah_data / banyak_data ;
    return hasil ;
}


int main()
{
    int input ;
    float function_1, function_2 ;
    printf("Masukkan banyak angka : ") ;
    scanf("%i", &input) ;
    function_1 = masukan(input) ;
    function_2 = average( input, function_1 ) ;
    printf("Total jumlah data yang dimasukkan %.2f\nDengan rata rata %.2f ", function_1, function_2) ;

}