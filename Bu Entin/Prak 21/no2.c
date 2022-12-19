#include <stdio.h>
int pjgstr(char[]);

int main()
{
    char teks[255];
    int jumkar=1;
    printf("Masukkan kalimat \t= ");
    fgets(teks,sizeof teks, stdin);
    jumkar = pjgstr(teks);
    printf("\nPanjang Karakternya \t= %d\n", jumkar);
}

int pjgstr(char sesuatu[])
{
    int i = 0;
    while(sesuatu[i] != '\0')
        i++;
    return i;
}