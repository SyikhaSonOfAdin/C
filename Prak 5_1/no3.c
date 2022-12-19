#include <stdio.h>


int kuadrat( float input )
{
    return (input * input) ;
}

int main()
{
    int userInput, hasil ;
    printf("Masukkan bilangan yang ingin dikuadratkan : ") ;
    scanf("%i", &userInput) ;

    hasil = kuadrat(userInput) ;
    printf("Kuadrat dari %i = %i",userInput ,hasil) ;
}

