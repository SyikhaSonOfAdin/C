#include <stdio.h>
#include <stdlib.h>

typedef struct simpul Node;
typedef struct simpul{
    int data;
    Node *next ;
};

Node *head = NULL ;

void awal( int input ){
    Node *awal ;
    awal = (Node *)malloc(sizeof(Node)) ;
    awal->data = input ;
    awal->next = head ;
    head = awal ;
}

int main(){
    char input ;
    int input1 ;
    printf("Memasukkan nilai awal pada linked list \n") ;
    do
    {
        printf("Masukkan nilai : ") ;
        scanf("%i", &input1) ;
        awal(input1) ;
        fflush(stdin) ;
        printf("Lanjut? y/t ") ;
        scanf("%c", &input) ;
        if( input == 't'){
            break;
        }
    } while ( input == 'y' || input == "y");

    Node *current_node = head;
   	while ( current_node != NULL) {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
}
// int main(){
//     Node *p, *temp ;
//     p = (Node *)malloc(sizeof(Node)) ;
//     p->data = 89 ;
//     p->next = NULL ;
//     if( head == NULL ){
//         head = p ;
//         puts("Succeed") ;
//     }
//     else{
//         puts("Gagal") ;
//     }
    
//     Node *ptr ;
//     ptr = head ;
//     temp = (Node *)malloc(sizeof(Node)) ;
    
//     temp->data = 11 ;
//     temp->next = NULL ;
    
//     if( head != NULL ){
//         head->next = temp ;
//         puts("Succeed") ;
//     }
//     else{
//         puts("Gagal") ;
//     }
    
//     while(ptr->data != 11 )
//     {
        
//         if(ptr->next == NULL){
//             puts("data tidak ada!");
//             break;
//         }
//         else if(ptr->data == 11){
//             printf("Data ditemukan %i", *ptr) ;
//         }
//         else{
//             ptr = ptr->next ;
//             puts("Searching") ;
//         }
//     }

//     Node *current_node = head;
//    	while ( current_node != NULL) {
//         printf("%d ", current_node->data);
//         current_node = current_node->next;
//     }
// }