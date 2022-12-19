#include <stdio.h>
#include <string.h>

int main(void) {
    //POLITEKNIK
    char kalimat[] = {'P','O','L','I','T','E','K','N','I','K'};
    
    for (int loop1 = strlen(kalimat) - 1; loop1 >= 0; loop1--) {
        for (int loop2 = 0; loop2 <= loop1; loop2++) {
            printf("%c", kalimat[loop2]);
        }
        printf("\n");
    }
    
    for (int loop1 = 1; loop1 < strlen(kalimat); loop1++) {
        for (int loop2 = 0; loop2 <= loop1; loop2++) {
            printf("%c", kalimat[loop2]);
        }
        printf("\n");
    }
    
    return 0;
}