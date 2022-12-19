#include <stdio.h>
// No 4 PRAK 4_2
int main()
{
    char kar;
    int karakter = 0, spasi = 0;

    printf("Ketikan kalimat\n\n");
    while ((kar = getchar()) != '\n')
    {
        karakter++;
        if(kar == ' ')
            spasi++;
    }
    printf("\nJumlah karakter = %d", karakter);
    printf("\nJumlah Spasi = %d", spasi);
}