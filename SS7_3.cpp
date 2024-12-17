#include <stdio.h>

int main() {
    int arr[5] = {10, 21, 34, 43, 50};
    int foundEven = 0; 

    printf("Cac so chan la:\n");
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            foundEven = 1;
        }
    }

    if(!foundEven) {
        printf("Mang ko co so chan nao.");
    }

    printf("\n");

    return 0;
}

