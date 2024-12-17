#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    printf("Cac phan tu:\n");
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Do dai mang: %d\n", length);
    
    return 0;
}

