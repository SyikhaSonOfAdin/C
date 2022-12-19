#include <stdio.h>
// No 6 PRAK 3_1 
int main()
{
    float input1 ;
    printf("Masukkan bilangan :") ;
    scanf("%f",&input1) ;
    if( input1 >= 1 && input1 <= 100 ) 
    {
        printf("%.2f ada dalam range 1 - 100 ",input1) ;
    }
    else 
    {
        printf("%.2f tidak dalam range 1 - 100 ", input1) ;
    }
}