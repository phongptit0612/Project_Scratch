#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phann tu cua mang: ");
    scanf("%d", &n);

    int arr[n];  

    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Phan tu cua mang ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

