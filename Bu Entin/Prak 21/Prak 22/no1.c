#include <stdio.h>
#include <string.h>

int main()
{
    char teks1[255],teks2[255],hslBalik[255];
    
    printf("Masukkan kalimat\t=");
    gets(teks1);
    printf("\nPanjang kalimat \t= %d karakter",strlen(teks1));
    printf("\nHasil Pembalikan \t= %s\n",strrev(teks1));
    strcpy(teks2,teks1);
    printf("\nHasil Pencopyan \t=%s",teks2);
}

int pjgstr(char sesuatu[])
{
    int i = 0;
    while(sesuatu[i])
    i++;
    return i;
}