#include <stdio.h>

int main()
{
    float a, b, c, rata, boa, bob, boc ;
    char  depan[30] , tengah[30] , belakang[30] ;
    printf("\t\tMENGHITUNG RATA-RATA NILAI SISWA\n") ;
    printf("\t_____________________________________________\n\n") ;
    printf("Masukkan nama depan siswa ;") ;
    scanf("%s",&depan) ;
    printf("Masukkan nama tengah siswa ;") ;
    scanf("%s",&tengah) ;
    printf("Masukkan belakang depan siswa ;") ;
    scanf("%s",&belakang) ;
    printf("Masukkan nilai A (Bobot : 2) : ") ;
    scanf("%f",&a) ;
    boa = a * 2 ;
    printf("Masukkan nilai B (Bobot : 3) : ") ;
    scanf("%f",&b) ;
    bob = b * 3 ;
    printf("Masukkan nilai C (Bobot : 5) : ") ;
    scanf("%f",&c) ;
    boc = c * 5 ;
    rata = (boa + bob + boc) / 10  ;
    printf("\nNilai rata rata %s %s %s adalah %.1f",depan,tengah,belakang,rata) ;
    return 0 ;
}