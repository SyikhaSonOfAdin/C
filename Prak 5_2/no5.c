#include <stdio.h>

float konversi( float suhu, char asal, char tujuan)
{
    switch ( asal )
    {
    case 'C':
        switch( tujuan )
        {
            case 'F' :
                return suhu * 9/5 + 32 ;
                break;
            case 'R' :
                return suhu * 4/5 ;
                break;
            default:
                printf("INVALID INPUT CAPITAL ONLY!") ;
                break;

        }
        break;
    
    case 'F' :
        switch( tujuan )
        {
            case 'C' :
                return (suhu - 32) * 5/9 ;
                break;
            case 'R' :
                return (suhu - 32) * 4/9 ;
                break;
            default:
                printf("INVALID INPUT CAPITAL ONLY!") ;
                break;
        }
        break;

    case 'R' :
        switch( tujuan )
        {
            case 'C' :
                return suhu * 5/4 ;
                break;
            case 'F' :
                return (suhu * 9/4) + 32 ;
                break;
            default:
                printf("INVALID INPUT CAPITAL ONLY!") ;
                break;
        }
        break;

    default:
        printf("INVALID INPUT CAPITAL ONLY!") ;
        break;
    }
}

int main()
{
    float inputSuhu, hasil ;
    char inputTujuan, inputAsal ;

    printf("Masukkan suhu sumber : ") ;
    scanf("%f", &inputSuhu) ;
    printf("Masukkan satuan asal : ") ;
    scanf("%s", &inputAsal) ;
    printf("Masukkan satuan tujuan : ") ;
    scanf("%s", &inputTujuan) ;

    hasil = konversi( inputSuhu, inputAsal, inputTujuan ) ;
    
    printf("Hasil konversi suhu %.2f %c = %.2f %c", inputSuhu, inputAsal, hasil, inputTujuan) ;
}