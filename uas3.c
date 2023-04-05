#include <stdio.h>

int main(){
 unsigned int angka, *penunjuk;
 angka=8;
 penunjuk=&angka;
 //perubahan nilai
 *penunjuk += 2;
 printf("nilai variabel angka = %u\n" , angka);
 printf("alamat variabel angka = %u\n\n", &angka);
 angka = 9;
 printf("nilai variabel yang disimpan variabel penunjuk = %u\n", 
*penunjuk);
 printf("alamat variabel yang disimpan variabel penunjuk = %u\n\n", 
penunjuk);
 //pergeseran alamat
 penunjuk +=2;
 printf("alamat yang disimpan penunjuk : %p\n", penunjuk);
 printf("nilai variabel angka : %u\n", angka);
 return 0;
}