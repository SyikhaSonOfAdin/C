#include <stdio.h>

int pangkat( int bilangan, int pangkat )
{
    int loop1, inisialisasi = 1 ;
    for( loop1 = 1 ; loop1 <= pangkat ; loop1 = loop1 + 1 )
    {
        inisialisasi = inisialisasi * bilangan ;
    }
    return inisialisasi ;
}

int main() 
{
    int bil, jab, akhir ;
    printf("Masukkan bilangan : ") ;
    scanf("%i", &bil) ;
    printf("Masukkan pangkat : ") ;
    scanf("%i", &jab) ;
    akhir = pangkat( bil, jab) ;
    printf("Hasil nya %i", akhir) ;

}