#include <stdio.h>
#define MAKS 200


void pencaripecahan( float nominal, int array[MAKS])
{
    int sisa ;
    int array[MAKS] ;
    sisa = nominal / 100000; 
    nominal -= 100000*sisa;
    printf("%d Lembar 100000 \n", sisa);

    sisa = nominal / 50000;
    nominal -= sisa*50000;
    printf("%d Lembar 50000 \n", sisa);

    sisa = nominal / 20000;
    nominal -= sisa*20000;
    printf("%d Lembar 20000 \n", sisa);

    sisa = nominal / 10000;
    nominal -= sisa*10000;
    printf("%d Lembar 10000 \n", sisa);

    sisa = nominal / 5000;
    nominal -= sisa*5000;
    printf("%d Lembar 5000 \n", sisa);

    sisa = nominal / 2000;
    nominal -= sisa*2000;
    printf("%d Lembar 2000 \n", sisa);

    sisa = nominal / 1000;
    nominal -= sisa*1000;
    printf("%d Lembar 1000 \n",sisa);
 
}

int main()
{
    int nominal, array[MAKS], input; 

    printf("Masukan Nilai Uang: \n");
    scanf("%d", &nominal);
    
    pencaripecahan(nominal, array[MAKS]) ;
    
   

}