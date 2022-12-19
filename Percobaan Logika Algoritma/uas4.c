#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {

    char kata[100];
    printf ("Masukkan Kata : ");gets (kata);
    konversi (kata);
}

char konversi (char kata[100]) {
    int n, a;
    n = strlen (kata);
        for (a =0; a <= n-1; a++) {
            if (islower (kata[a])) {
                kata[a] = toupper (kata[a]);
            }
            else {
                kata[a] = tolower (kata[a]);
            }
            printf ("%c", kata[a]);
        }
    return (kata[100]);
}