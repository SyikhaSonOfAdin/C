#include <stdio.h>

float nilaiAkhir( int absen, float tugas, float uts, float uas )
{
    int nilaiAbsen , nilaiTugas, nilaiUts, nilaiUas, total ;
    nilaiAbsen = absen * 0.1 ;
    nilaiTugas = tugas * 0.2 ;
    nilaiUts = uts * 0.3 ;
    nilaiUas = uas * 0.4 ;
    return total = nilaiAbsen + nilaiTugas + nilaiUts + nilaiUas ;
}

int main()
{
    int absen ;
    float tugas, uts, uas, hasil ;
    printf("\t\tNILAI AKHIR\n\n") ;
    printf("Masukkan jumlah absen : ") ;
    scanf("%i", &absen) ;
    printf("Masukkan nilai Tugas : ") ;
    scanf("%f", &tugas) ;
    printf("Masukkan nilai UTS : ") ;
    scanf("%f", &uts) ;
    printf("Masukkan nilai UAS : ") ;
    scanf("%f", &uas) ;
    hasil = nilaiAkhir(absen, tugas, uts, uas) ;
    printf("Nilai akhir anda adalah %.2f", hasil) ;
}