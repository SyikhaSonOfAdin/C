#include <stdio.h>

struct mahasiswa
{
    char nama[30] ;
    float nilaiTugas ;
    float uts ;
    float uas ;
    float akhir ;
    char grade ;
};

void result( struct mahasiswa dataMhs[], int totalMhs){
    printf("\t\t\tDAFTAR NILAI\n") ;
    printf("\t\tMATAKULIAH KONSEP PEMROGRAMAN\n") ;
    printf("===================================================================\n");
    printf("No\tNama Mhs\tTugas\tUTS\tUAS\tNilai Akhir\tGrade\n") ;
    for(int loop1 = 0 ; loop1 < totalMhs ; loop1++)
    {
        printf("%i\t%s\t\t%.2f\t%.2f\t%.2f\t%.2f\t\t%c\n", loop1 + 1, dataMhs[loop1].nama, dataMhs[loop1].nilaiTugas, dataMhs[loop1].uas, dataMhs[loop1].uts, dataMhs[loop1].akhir, dataMhs[loop1].grade) ;
    }
}


int main(){
    int totalMhs, loop1;
    
    printf("Jumlah Mahasiswa? ");
    scanf("%i", &totalMhs) ;

    struct mahasiswa dataMhs[totalMhs];

    for( loop1 = 0 ; loop1 < totalMhs ; loop1++)
    {
        printf("\n\nMahasiswa ke-%i\n", loop1 + 1) ;
        printf("Nama\t\t: ") ;
        scanf("%s", dataMhs[loop1].nama);
        printf("Nilai Tugas\t: ") ;
        scanf("%f", &dataMhs[loop1].nilaiTugas) ;
        printf("Nilai UTS\t: ") ;
        scanf("%f", &dataMhs[loop1].uts) ;
        printf("Nilai UAS\t: ") ;
        scanf("%f", &dataMhs[loop1].uas) ;
        dataMhs[loop1].akhir = (0.2 * dataMhs[loop1].nilaiTugas) + (0.4 * dataMhs[loop1].uas) + (0.4 * dataMhs[loop1].uts) ;
        if( dataMhs[loop1].akhir >= 90 ){
            dataMhs[loop1].grade = 'A' ;
        }
        else if( dataMhs[loop1].akhir >= 70 && dataMhs[loop1].akhir < 90){
            dataMhs[loop1].grade = 'B' ;
        }
        else if( dataMhs[loop1].akhir >= 60 && dataMhs[loop1].akhir < 70){
            dataMhs[loop1].grade = 'C' ;
        }
        else if( dataMhs[loop1].akhir >= 50 && dataMhs[loop1].akhir < 60){
            dataMhs[loop1].grade = 'D' ;
        }
        else{
            dataMhs[loop1].grade = 'E' ;
        }
    }
    result(dataMhs, totalMhs) ;
}




