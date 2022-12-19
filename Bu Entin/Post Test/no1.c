#include <stdio.h>

int main(){
    int arr[1000000];
    int n, sisip, jml, temp;

    printf("banyaknya input : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Masukkan data yang akan disisipkan: ");
    scanf("%d", &sisip);

    printf("Masukkan posisi data yang akan disisipkan: ");
    scanf("%d", &jml);

    for(int i=n; i>=jml; i--){
        arr[i] = arr[i-1];
    }

    arr[jml] = sisip;

    printf("Output : ");
    for(int i=0; i<=n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}