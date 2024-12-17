#include <stdio.h>

int main() {
    int arr[5];

    printf("Nhap phan tu:\n");
    for(int i = 0; i < 5; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Cac phan tu la:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

