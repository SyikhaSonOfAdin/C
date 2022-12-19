#include <stdio.h>
#include <string.h>

int bandingstr1(char teks1[255],char teks2[255]);

int main()
{
    char teks1[255],teks2[255];
    int hslBanding;

    printf("\tMasukkan kalimat pertama\t = ");
    gets(teks1);
    printf("\tMasukkan kalimat kedua\t = ");
    gets(teks2);

    hslBanding = bandingstr1(teks1,teks2);
    
    if(hslBanding == 0)
        printf("\nKalimat yang anda masukkan diatas SAMA\n");
    else
        printf("\nKalimat yang anda masukkan diatas TIDAK SAMA\n");
}

int bandingstr1(char kal1[], char kal2[])
{
    int i,sama = 0;
    for(i=0;i<strlen(kal1) || i<strlen(kal2);i++)
    {
        if(kal1[i] > kal2[i])
        {
            sama = 1;
            break;
        }

        else if(kal1[i] > kal2[i])
        {
            sama = -1;
            break;
        }
        
        i++;
    }
    return sama;
}