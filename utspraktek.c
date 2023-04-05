#include <stdio.h>
// Deret fibonacci, kecuali kelipatan 3 dan 5 
int main()
{
    int input, bil = 0, bil1 = 1, bil2, a;

    printf("Masukan jumlah deret : ");
    scanf("%d", &input);

    printf("Deret Fibonacci : %i, %i", bil, bil1);

    for (a = 0; a < input - 2; a = a + 1 )
    {
        bil2 = bil + bil1;
        bil = bil1;
        bil1 = bil2;
        if( bil1 % 5 == 0 || bil1 % 3 == 0 )
        {
            continue;
        }
        printf(", %i", bil1) ;
    } 
}