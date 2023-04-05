#include <stdio.h>
#include <stdlib.h>

int main(){
    char *pblok;
    pblok = (char *) malloc(500 * sizeof(char));
    
    if (pblok == NULL)
        puts("Error on malloc");
    else {
        puts("OK, alokasi memori sudah dilakukan");
        puts("------");
        free(pblok);
        puts("Blok memori telah dibebaskan kembali");
    }
}