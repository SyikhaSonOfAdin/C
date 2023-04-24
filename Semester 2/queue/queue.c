#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct
{
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Inisialisasi queue
void initQueue(Queue *q)
{
    q->front = -1;
    q->rear = -1;
}

// Cek apakah queue penuh
int isFull(Queue *q)
{
    return (q->rear == MAX_SIZE - 1);
}

// Cek apakah queue kosong
int isEmpty(Queue *q)
{
    return (q->front == -1 || q->front > q->rear);
}

// Operasi Enqueue (menambahkan elemen ke dalam queue)
void enqueue(Queue *q, int value)
{
    if (isFull(q))
    {
        printf("Antrian penuh. Tidak bisa menambahkan data.\n");
        return;
    }
    q->data[++q->rear] = value;
    if (q->front == -1)
    {
        q->front = 0;
    }
}

// Operasi Dequeue (menghapus elemen dari depan queue)
int dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Antrian kosong. Tidak bisa menghapus data.\n");
        return -1;
    }
    int value = q->data[q->front++];
    if (q->front > q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    return value;
}

// Menampilkan isi queue
void printQueue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Antrian kosong. Tidak ada data yang bisa ditampilkan.\n");
        return;
    }
    printf("Isi antrian: ");
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->data[i]);
    }
    printf("\n");
}

int main()
{
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printQueue(&q);

    int value = dequeue(&q);
    printf("Data yang dihapus: %d\n", value);

    printQueue(&q);

    enqueue(&q, 40);
    enqueue(&q, 50);

    printQueue(&q);

    return 0;
}