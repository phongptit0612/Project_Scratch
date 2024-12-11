#include <stdio.h>

int main() {
    // Khai bao cac gia tri so nguyen
    int num1 = 5;  // Bien num1 gan gia tri = 5
    int num2 = 7;  // Bien num2 gan gia tri = 7
    int sum2;
    // khai bao bien va luu ket qua tong
    int sum = num1 + num2;  // Tinh tong
    
    // Luu kqua saang bien khac
    sum2 = sum;
    // Xuat kqua ra man hinh
    printf("Tong la: %d\n", sum2);

    return 0;
}

