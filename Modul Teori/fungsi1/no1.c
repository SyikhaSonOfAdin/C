#include <stdio.h>
// No 1 Latihan modul teori fungsi 1
void menu()
{
    printf("Pilihan Menu\n") ;
}

int main()
{
    int input, loop1 = 0 ;
    printf("Berapa banyak anda ingin menampilkan? ") ;
    scanf("%i", &input) ;
    while( loop1 <= input )
    {
        loop1 = loop1 + 1 ;
        menu() ;
    }
}