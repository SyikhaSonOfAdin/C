#include <stdio.h>
// No 1 PRAK 4_2
int main() 
{
    char huruf ;
    while(huruf != 'X'){
        printf("Masukkan karakter atau hruruf : ") ;
        scanf("%s", &huruf) ;
        printf("Karakter yang anda masukkan adalah %c\n", huruf) ;
    }
}