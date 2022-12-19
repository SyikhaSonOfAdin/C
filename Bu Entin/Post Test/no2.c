#include <stdio.h>
#define MAKS 2000

int cekcari(char *sesuatu, int cari) {
   int totalcari = 0;
   for (int i = 0; i < MAKS; i++) {
      if (sesuatu[i] == cari)
         totalcari = totalcari + 1 ;
   }
   return totalcari;
}

int main() {
   char sesuatu[MAKS], cari;

   printf("Masukan kalimat : ");
   fgets(sesuatu, MAKS, stdin);

   printf("Masukan huruf yang dicari : ");
   cari = getchar();
   
   int totalcari = cekcari(sesuatu, cari);
   printf("Jumlah huruf %c adalah %i\n", cari, totalcari);
}