#include <stdio.h>
// SOAL NO.4 PRAK 2_2

int main()
{
    int b, a, hitung, ops, ops1, ops2 ;
    float hitung1, hitung2, hitung3;
    
    printf("menghitung harga tiket\n");
    printf("(Harga satu tiket Rp.50.000,00) \n");
    printf("Masukkan jumlah tiket yang diinginkan :");
    b = 50.000 ;
    scanf("%i",&a);
    hitung = a % 3 ;

    if (hitung == 1) {
        hitung1 = a / 3 ;
        ops = hitung1 * (2 * b) + b ;
        printf("harga yang harus dibayarkan adalah :\n") ;
        printf("Rp %i.000,00",ops);

    }
    if (hitung == 2) {
        hitung2 = a / 3 ;
        ops1 = hitung2 *(2 * b) + (2 * b) ;
        printf("Harga yang harus dibayarkan adalah :\n") ;
        printf("Rp %i.000,00",ops1) ;

    }
    if (hitung == 0) {
        hitung3 = a / 3 ;
        ops2 = hitung3 * (2 * b) ;
        printf("Harga yang harus dibayarkan adalah :\n") ;
        printf("Rp %i.000,00",ops2) ;
    }
return 0 ;
}
