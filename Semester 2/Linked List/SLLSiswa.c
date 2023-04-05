#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Siswa{
    int no;
    char nama[20];
    float nilai;
    struct Siswa *next;
} Node ;

Node *head = NULL;

void cetak(){
    Node *cetak ;
    cetak = head ;
    printf("\t\tDAFTAR MAHASISWA\n") ;
    printf("=================================================\n") ;
    printf("No\t\t\tNama\t\tNilai\n") ;
    while( cetak != NULL )
    {
        printf("%i\t\t\t%s\t\t%.2f\n", cetak->no, cetak->nama, cetak->nilai ) ;
        cetak = cetak->next;
    }
}

void awal(int no, char nama[], float nilai) {
    Node *data ;
    data = (Node *)malloc(sizeof(Node)) ;
    data->no = no ;
    strcpy(data->nama, nama) ;
    data->nilai = nilai ;
    data->next = head ;
    head = data ;
}

void akhir(int no, char nama[], float nilai) {
    Node *data ;
    data = (Node *)malloc(sizeof(Node)) ;
    data->no = no ;
    data->nilai = nilai ;
    strcpy(data->nama, nama) ;
    data->next = NULL;
    if (head == NULL) {
        head = data;
        return;
    }
    Node *cont = head;
    while (cont->next != NULL) {
        cont = cont->next;
    }
    cont->next = data;
}

void DelAwal(){
    Node *DelAwal ;
    DelAwal = head ;
    head = head->next ;
    free(DelAwal) ;
    DelAwal = NULL ;
    return ;
}

void DelAkhir() {
    Node *DelAkhir, *PrevDelAkhir ;
    DelAkhir = head ;
    while( DelAkhir != NULL )
    {
        if( DelAkhir->next != NULL ){
            PrevDelAkhir = DelAkhir ;
        }
        DelAkhir = DelAkhir->next ;
    }
    PrevDelAkhir->next = NULL ;
    free(DelAkhir) ;
    DelAkhir = NULL ;
    return ;
}

void DelAfter(int key) {
    Node *DelAfter, *PrevDelAfter;
    DelAfter = head ;
    while(DelAfter != NULL && DelAfter->no != key) {
        PrevDelAfter = DelAfter ;
        DelAfter = DelAfter->next ;
    }
    if (DelAfter == NULL) {
        printf("Data dengan nomor %i tidak ditemukan.\n", key);
        return;
    }
    PrevDelAfter->next = DelAfter->next ;
    free(DelAfter) ;
    DelAfter = NULL ;
    return ;
}

int main() {
    int Option, no ;
    float nilai ;
    char norExit, nama[20], next ;
    Node temp ;
    do{
        printf("\n\t-LINKED LIST-\n") ;
        printf("Option :\n1. Input Data Awal\n2. Input Data Akhir\n3. Cetak\n4. Hapus Data Awal\n5. Hapus Data Terakhir\n6. Hapus Data Setelah\n\nPilih : ") ;
        scanf("%i", &Option) ;
        switch (Option)
        {
        case 1:
            do{
                printf("No Mahasiswa : ") ;
                scanf("%i", &no) ;
                printf("Nama : ") ;
                scanf("%s", nama) ;
                printf("Nilai : ") ;
                scanf("%f", &nilai) ;
                awal(no, nama, nilai) ;
                printf("Memasukkan data lagi? (y/t) ") ;
                scanf(" %c", &next) ;
            }while( next == 'y' || next == 'Y' ) ;

            break;
            
        case 2 :
            do{
                printf("No Mahasiswa : ") ;
                scanf("%i", &no) ;
                printf("Nama : ") ;
                scanf("%s", nama) ;
                printf("Nilai : ") ;
                scanf("%f", &nilai) ;
                akhir(no, nama, nilai) ;
                printf("Memasukkan data lagi? (y/t) ") ;
                scanf(" %c", &next) ;
            }while( next == 'y' || next == 'Y' ) ;

            break;

        case 3 :
            cetak();
            break;

        case 4 :
            DelAwal() ;
            break;

        case 5 :
            DelAkhir() ;
            break;

        case 6 :
            printf("Masukkan No Mahasiswa yang ingin diHapus : ") ;
            scanf("%i", &no) ;
            DelAfter( no ) ;
            break;

        default:
            printf("Invalid Input!\n") ;
            break;
        }

        fflush(stdin) ;
        
        printf("PRESS Anything to continue then ENTER...") ;
        scanf(" %c", &norExit) ;
    }while( norExit != 'x' && norExit != 'X') ;
}
