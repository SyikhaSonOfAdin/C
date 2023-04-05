#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void awal(int input) {
    Node *awal;
    awal = (Node *) malloc(sizeof(Node));
    awal->data = input;
    awal->next = head;
    head = awal;
}

void akhir(int input) {
    Node *run, *box;
    run = head;

    box = (Node *) malloc(sizeof(Node));
    box->data = input;
    box->next = NULL;

    if (run == NULL) {
        head = box;
        return;
    }

    while (run->next != NULL) {
        run = run->next;
    }
    run->next = box;
}

void before(int input, int key){
    Node *before, *before1, *keyContainer ;
    before = head ;
    keyContainer = (Node *)malloc(sizeof(Node)) ;
    keyContainer->data = input ;
    if( head->data == key ){
        keyContainer->next = head ;
        head = keyContainer ;
    }
    else{
        while( before->data != key && before != NULL )
        {
            before1 = before ;
            before = before->next ;
        }     
        keyContainer->next = before ;
        before1->next = keyContainer ;
    }
}

void after(int input, int key) {
    Node *after, *run;
    run = head;
    if( head == NULL)
    {
        printf("LinkedList Belum Terbentuk!") ;
        return ;
    }
    else{
        while (run != NULL) {
        if (run->data == key) {
            after = (Node *) malloc(sizeof(Node));
            after->data = input;
            after->next = run->next;
            run->next = after;
            return;
            }
        run = run->next;
        }
   
    }
    printf("Key not found\n");
}

void cetak() {
    Node *current_node = head;
    if (head == NULL) {
        printf("Linked list doesn't exist!");
    }
    while (current_node != NULL) {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}

void hapusAwal(){
    Node *hapusAwal ;
    hapusAwal = head ;
    if( head == NULL )
    {
        printf("Tidak Ada Data Awal!") ;
    }
    else{
        head = hapusAwal->next ;
        printf("Berhasil Menghapus..\n") ;
        free(hapusAwal) ;
        hapusAwal = NULL ;
    }
}

void hapusAkhir(){
    Node *hapusAkhir, *before ;
    int i = 0, d = 0 ;
    hapusAkhir = head->next ;
    before = head ;
    if( head == NULL )
    {
        printf("Tidak Ada Data yang Terbentuk!") ;
    }
    else{
        while( hapusAkhir != NULL ){
            if( hapusAkhir->next != NULL ){
                before = hapusAkhir ;
            }
            hapusAkhir = hapusAkhir->next ;               
        }
        before->next = NULL ;
        free(hapusAkhir) ;
        hapusAkhir = NULL ;
    }
}

void hapusTertentu(int input){
    Node *hapusTertentu, *help ;
    hapusTertentu = head ;
    while( hapusTertentu->data != input )
    {
        if( hapusTertentu->data != input ){
            help = hapusTertentu ;
        }
        hapusTertentu = hapusTertentu->next ;
    }
    help->next = hapusTertentu->next ;
    free(hapusTertentu) ;
    hapusTertentu = NULL ;
}

int main() {
    char input;
    int input1;
    int input2;
    char exit;
    printf("\tLINKED LIST\n");
    do {
        printf("Option :\n");
        printf("1. Input Nilai Awal\n2. Input Nilai Setelah\n3. Input Nilai Akhir\n4. Input Nilai Sebelum\n5. Hapus Nilai Awal\n6. Hapus Nilai Akhir\n7. Hapus Tertentu\n8. Clear Terminal\n9. Cetak Data\nPilih : ");
        scanf("%i", &input2);
        switch (input2) {
            case 1:
                do {
                    printf("Masukkan nilai : ");
                    scanf("%i", &input1);
                    awal(input1);
                    fflush(stdin);
                    printf("Lanjut? y/t ");
                    scanf(" %c", &input);
                } while (input == 'y' || input == 'Y');
                break;

            case 2:
                printf("Masukkan nilai : ");
                scanf("%i", &input1);
                printf("Akan dimasukkan setelah : ");
                scanf("%i", &input2);
                after(input1, input2);
                break;

            case 3:
                printf("Masukkan nilai : ");
                scanf("%i", &input1);
                akhir(input1);
                fflush(stdin);
                break;

            case 4:
                printf("Masukkan nilai : ");
                scanf("%i", &input1);
                printf("Akan dimasukkan sebelum : ");
                scanf("%i", &input2);
                before(input1, input2) ;
                break;

            case 5:
                hapusAwal() ;
                break;

            case 6:
                hapusAkhir() ;
                break;

            case 7:
                printf("Data yang ingin dihapus : ") ;
                scanf("%i", &input1) ;
                hapusTertentu(input1) ;
                break;

            case 8:
                system("cls") ;
                break;

            case 9:
                cetak() ;
                break;

            default:
                printf("Invalid Input!\n");
                break;
        }
        fflush(stdin);
        printf("\n\nPress anything to continue then ENTER...");
        scanf(" %c", &exit);
    } while (exit != 'x');
    return 0;
}
