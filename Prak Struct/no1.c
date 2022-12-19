#include <stdio.h>
#define MAKS 20

struct date { //definisi struct date
    int month, day, year;
};

struct student { //definisi struct student
    char name[30];
    struct date birthday;
};

int main ()
{
    struct student data_mhs[MAKS];
    int i = 0, jml;
    char lagi;

    do
    {
        printf("Name : ");
        gets(data_mhs[i].name);
        printf("Birthday (mm-dd-yyyy): ");
        scanf("%d-%d-%d", &data_mhs[i].birthday.month, &data_mhs[i].birthday.day, data_mhs[i].birthday.year);
        i++;

        fflush(stdin); //menghapus sisa data dalam buffer keyboard
        printf("\nMau memasukkan data lagi? (Y/N)");
        lagi = getchar( ); //baca tombol
        fflush(stdin); //menghapus sisa data dalam buffer keyboard        
    }
     while (lagi == 'Y' || lagi == 'y');
     jml = i;
     printf("\n Data Mahasiswa\n");
     for (i = 0; i < jml; i++)
    {
        printf("%d. Name : %s", i + 1, data_mhs[i].name);
        printf("\n Birthday : %d-%d-%d\n\n", data_mhs[i].birthday.month, data_mhs[i].birthday.day, data_mhs[i].birthday.year);
    }

    return 0;
}