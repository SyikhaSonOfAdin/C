#include <stdio.h>

int pjgstr(char[]);
void balikstr(char[]);

int main()
{
    char teks[255];
    int jumkar=0,i,j;
    printf("Masukkan kalimat \t= ");
    gets(teks);
    balikstr(teks);
    printf("Hasil Pembalikkan \t= %s\n", teks);
}

int pjgstr(char sesuatu[])
{
    int i = 0;
    while(sesuatu[i])
    i++;
    return i;
}

void balikstr(char sesuatu[])
{
    int i,j=0;
    char penampung[255];
    for(i=pjgstr(sesuatu)-1;i>=0;i--)
    {
        penampung[j] = sesuatu[i];
        j++;
    }
    penampung[j] = '\0';

    for(i=0;i<j;i++)
        sesuatu[i] = penampung[i];
}