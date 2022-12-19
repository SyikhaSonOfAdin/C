#include <stdio.h>
//PERMUTASI dan KOMBINASI
int permutasi( int bil1, int bil2 )
{
    int loop1, result1 = 1, loop2, result2 = 1, operation1, operation2 ;

    for( loop1 = bil1 ; loop1 > 1 ; loop1 = loop1 - 1 )
    {
        result1 = loop1 * result1 ;
    }
    
    operation1 = bil1 - bil2 ;
    
    for( loop2 = operation1 ; loop2 > 1 ; loop2 = loop2 - 1 )
    {
        result2 = result2 * loop2 ;
    }

    operation2 = result1 / result2 ;

    return printf("\n\tProses Permutasi :\n\t%i! = %i\n\t( %i - %i )! = %i\n\t%i / %i = %i\n\n\nJadi hasil Permutasi dari\nn = %i\nr = %i\nadalah %i\n\n ", bil1, result1, bil1, bil2, result2, result1, result2, operation2, bil1, bil2, operation2 ) ;
}

int kombinasi( int bil1, int bil2 )
{
    int loop1, loop2, loop3, operation1, operation2, operation3, result1 = 1, result2 = 1, result3 = 1 ;
    for( loop1 = bil1 ; loop1 > 1 ; loop1 = loop1 - 1 )
    {
        result1 = result1 * loop1 ;
    }
    for( loop2 = bil2 ; loop2 > 1 ; loop2 = loop2 - 1 )
    {
        result2 = result2 * loop2 ;
    }
    operation1 = bil1 - bil2 ;
    for( loop3 = operation1 ; loop3 > 1 ; loop3 = loop3 - 1 )
    {
        result3 = result3 * loop3 ;
    }
    operation2 = result2 * result3 ;
    operation3 = result1 / operation2 ;
    return printf("\tProses Kombinasi :\n\t%i! = %i\n\t%i! = %i\n\t( %i - %i )! = %i\n\t%i! * (%i - %i)! = %i\n\t%i / %i = %i\n\n\nJadi hasil Kombinasi dari\nn = %i\nr = %i\nAdalah %i", bil1, result1, bil2, result2, bil1, bil2, result3, bil2, bil1, bil2, operation2, result1, operation2, operation3, bil1, bil2, operation3) ;
}

int main()
{
    int input1, input2 ;
    char hasilPermutasi, hasilKombinasi ;
    printf("\t\t----PERMUTASI & KOMBINASI----\n\nRumus Permutasi P(n,r) = n! / ( n - r )!\nRumus Kombinasi K(n,r) = n! / r!( n- r )!\n") ;
    printf("Masukkan n = ") ;
    scanf("%i", &input1) ;
    printf("Masukkan r = ") ;
    scanf("%i", &input2 ) ;

    hasilPermutasi = permutasi( input1, input2 ) ;
    hasilKombinasi = kombinasi( input1, input2 ) ;
    printf("Permutasi :\n%s", hasilPermutasi) ;
    printf("Kombinasi :\n%s", hasilKombinasi ) ;

}