#include <stdio.h>
#define MAX 50

struct nilai
{
    int nilaiTotal ;
    float rataRata ;
    int nilaiMhs ;
};

int main()
{
    int nilaiMhs[MAX][MAX] ;
    int nilaiTotal[MAX] ;
    float rataRata[MAX] ;
    char matkul[3][15] = {"PEMROGRAMAN", "MATEMATIKA", "LOGIKA ALG"} ;
    int input1, input2, loop2, loop1, initial_1 = 0 ;
    printf("Berapa banyak mahasiswa? ") ;
    scanf("%i", &input1 ) ;

    for( loop1 = 0 ; loop1 <= input1 - 1 ; loop1 = loop1 + 1 )
    {
        printf("\n\tMahasiswa %i\n", loop1 + 1 ) ;
        for( loop2 = 0 ; loop2 <= 2 ; loop2 = loop2 + 1 )
        {
            printf("Nilai %s mahasiswa ke-%i : ", matkul[initial_1], loop1 + 1) ;
            scanf("%i", &input2) ;

            nilaiMhs[loop1][loop2] = input2 ;
            nilaiTotal[loop1] = nilaiTotal[loop1] + nilaiMhs[loop1][loop2] ;
            initial_1 = initial_1 + 1 ;

            if( initial_1 >= 3 )
            {
                rataRata[loop1] = nilaiTotal[loop1] / 3 ; 
                initial_1 = 0 ;
            }
        }
        printf("\n") ;
    }
    printf("\nNo. Mhs\t\tRata-rata\n-------------------------\n") ;
    for( loop1 = 0 ; loop1 <= input1 - 1 ; loop1 = loop1 + 1 )
    {
        printf("  %i\t\t%.2f\n", loop1 + 1, rataRata[loop1] ) ;
    }
    printf("-------------------------") ;
}