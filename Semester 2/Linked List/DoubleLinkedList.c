#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *prev, *next;
} Node;

Node *head = NULL;

void insertAwal(int input)
{
    Node *awal;
    awal = (Node *)malloc(sizeof(Node));
    awal->data = input;
    awal->next = head;
    awal->prev = NULL;
    head = awal;
}


void insertBefore(int input, int key)
{
    Node *before, *keyContainer, *before1;
    before = head;
    keyContainer = (Node *)malloc(sizeof(Node));
    keyContainer->data = input;
    if (head->data == key)
    {
        head->prev = keyContainer ;
        keyContainer->next = head;
        keyContainer->prev = NULL;
        head = keyContainer;
    }
    else
    {
        while (before != NULL && before->data != key)
        {
            before1 = before;
            before = before->next;
        }
        if (before != NULL)
        {
            before1->next = keyContainer;
            keyContainer->prev = before1;
            keyContainer->next = before;
            before->prev = keyContainer;
        }
        else
        {
            printf("Key not found!\n");
        }
    }
}

void cetak()
{
    Node *current_node = head;
    if (head == NULL)
    {
        printf("Linked list doesn't exist!");
    }
    while (current_node != NULL)
    {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}

Node* deleteBefore(int key) {
    Node* current = head;

    // Cari node yang berisi kunci
    while (current != NULL && current->data != key) {
        current = current->next;
    }

    // Jika node tidak ditemukan, kembalikan head
    if (current == NULL) {
        return head;
    }

    // Jika node yang berisi kunci berada di awal, hapus semua node sebelumnya
    if (current->prev == NULL) {
        while (head != current) {
            Node* temp = head;
            head = head->next;
            free(temp);
        }
        return current;
    }

    // Jika node yang berisi kunci bukan di awal, hapus node sebelumnya secara berulang
    Node* prev = current->prev;
    while (prev != NULL) {
        Node* temp = prev;
        prev = prev->prev;
        free(temp);
    }

    // Hubungkan node sebelumnya ke node setelahnya
    current->prev = NULL;
    return current;
}

void deleteFromEnd() {
    Node *tail ;
    tail = head ;
    if (tail == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node *temp = tail;
    tail = tail->prev;
    if (tail == NULL) {
        head = NULL;
    } else {
        tail->next = NULL;
    }
    free(temp);
    printf("Node deleted from end successfully.\n");
}


int main()
{
    int option, input, key, exit;
    char next;

    do
    {
        printf("Option :\n1. Insert Awal\n2. Insert Before\n3. Cetak Linked List\n4. Hapus data sebelum\n5. Hapus semua data dari akhir\nPilih : ");
        scanf("%i", &option);
        switch (option)
        {
        case 1:
            do
            {
                printf("Masukkan data : ");
                scanf("%i", &input);
                insertAwal(input);
                fflush(stdin);
                printf("Lanjut? y/t");
                scanf("%c", &next);
            } while (next == 'y');
            break;

        case 2:
            do
            {
                printf("Masukkan data : ");
                scanf("%i", &input);
                printf("Dimasukkan sebelum : ");
                scanf("%i", &key);
                insertBefore(input, key);
                fflush(stdin);
                printf("Lanjut? y/t");
                scanf("%c", &next);
            } while (next == 'y');
            break;

        case 3:
            cetak();
            break;

        case 4:
            printf("Masukkan kunci : ") ;
            scanf("%i", &key) ;
            deleteBefore(key) ;
            break;

        case 5:
            deleteFromEnd() ;
            break;
        }
        fflush(stdin);
        printf("\n\nPress anything to continue then ENTER...");
        scanf(" %c", &exit);
    } while (exit != 'x');
}