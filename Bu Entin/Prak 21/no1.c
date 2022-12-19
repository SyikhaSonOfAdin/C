#include <stdio.h>

int main() 
{
    char teks[31];
    printf("Menggunakan scanf() \t= ");
    scanf("%s", teks);

    printf("Hasil inputan \t\t= %s", teks);
    fflush(stdin);

    printf("\n\n Menggunakan gets() \t= ");
    gets(teks);

    printf("Hasil inputan \t\t= %s", teks);
    fflush(stdin);

    printf("\n\n Menggunakan fgets() \t= ");
    fgets(teks, sizeof teks, stdin);

    printf("Hasil inputan \t\t= %s", teks);
    fflush(stdin);
}