#include <stdio.h>

int pjgstr(char[]);
void copystr(char[],char[]);

int main()
{
    char teks1[255],teks2[255];
    char jumKarakter=0;
    printf("Masukkan kalimat \t= ");
    gets(teks1);
    copystr(teks1,teks2);
    printf("Hasil Pengcopyan \t= %s\n",teks2);
}

int pjgstr(char sesuatu[])
{
    int i = 0;
    while(sesuatu[i])
    i++;
    return i;
}

void copystr(char asal[],char tujuan[])
{
    int i;
    for(i=0;i<pjgstr(asal)+1;i++)
    tujuan[i] = asal [i];
}