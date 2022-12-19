#include <stdio.h>

int main()
{
    char huruf ;
    printf("\t\tVOKAL / KONSONAN\n\n") ;
    printf("Masukkan huruf : ") ;
    scanf("%c", &huruf) ;
    if( huruf == 'A' || huruf == 'a' || huruf == 'I' || huruf == 'i' || huruf == 'u' || huruf == 'U' || huruf == 'E' || huruf == 'e' || huruf == 'O' || huruf == 'o' ) 
    {
        printf("%c adalah huruf vokal ", huruf ) ;
    }
    else
    {
        printf("%c adalah huruf konsonan ",huruf ) ;
    }
}