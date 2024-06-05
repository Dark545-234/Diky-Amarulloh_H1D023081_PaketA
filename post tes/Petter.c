#include <stdio.h>

int main(){
    int arr[6]={1, 6, 13, 16, 25, 26};
    int p = arr[6];

    

    printf("Daftar Halaman Sebelum Perubahan: \n");
    printf("%d", p);

    int x = p < 10;

    printf("Daftar Halaman Setelah Perubahan : \n");
    printf("%d", x);

    return 0;
}