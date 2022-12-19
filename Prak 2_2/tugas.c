#include <stdio.h>
// SOAL NO.3 PRAK 2_2
int main()
{
   int harikerja, trans, gaji, thr, total, tthr, anak, tkurang,ops1, ops2, ops3, pajak, total1 ;
   
   // INPUT
   printf("Masukkan jumlah gaji pokok Rp") ;
   scanf("%i",&gaji) ;
   
   printf("Jumlah anak :") ;
   scanf("%i",&anak) ;
   
   printf("Jumlah hari kerja dalam seminggu (6 atau 7 hari) :");
   scanf("%i",&harikerja) ;
   printf("\t\t====================================================================================================\n\n");
   printf("\t\t============================================TAMBAHAN GAJI======================================\n") ;
   // TUNJANGAN ISTRI/SUAMI
   ops1 = 0.1 * gaji ;
   printf("Tambahan tunjangan istri/suami Rp %i\n",ops1) ;
   // TUNJANGAN ANAK
   ops2 = 0.05 * anak * gaji ;
   printf("Tambahan tunjangan anak Rp %i\n",ops2) ;
   // BANTUAN TRANSPORT
   trans = 3000 *  ((52 * harikerja)/12) ;
   printf("Bantuan transport Rp %i\n",trans) ;
   // THR
   thr = 52 * 5000 * harikerja ;
   printf("THR per tahun Rp %i\n\n",thr) ;
    printf("\t\t============================================PENGURANGAN======================================\n") ;
   // (-)PAJAK
   pajak = 0.15 * (ops1 + ops2 + gaji) ;
   printf("Pengurangan pajak Rp %i\n",pajak) ;
   printf("Pengurangan polis asuransi Rp 20000\n\n") ;
   printf("\t\t============================================TOTAL PENDAPATAN======================================\n") ;
   // TOTAL PENDAPATAN 
   total = gaji + ops1 + ops2 - pajak - 20000 ;
   printf("Total pendapatan Rp %i\n",total)    ;
   total1 = gaji + ops1 + ops2 + thr - pajak - 20000 ;
   printf("Total pendapatan dengan THR Rp %i",total1) ;
}