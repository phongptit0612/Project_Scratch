#include <stdio.h>

int main() {
    // Khai bao gia tri 
    int num1 = 5;  // Bien num1 = 5 (gan gia tri)
    int num2 = 7;  // Bien num2 = 7 (gan gia tri)

    // Khai bao ket qua tinh toan
    int sum = num1 + num2;         // Tinh tong
    int difference = num1 - num2;  // T�nh hieu
    int product = num1 * num2;     // T�nh tich
    float quotient = (float)num1 / num2;  // T�nh thuong (chuyen numb1 thanh float)

    // In ket qua ra man hinh
    printf("T?ng c?a %d v� %d l�: %d\n", num1, num2, sum);
    printf("Hi?u c?a %d v� %d l�: %d\n", num1, num2, difference);
    printf("T�ch c?a %d v� %d l�: %d\n", num1, num2, product);
    printf("Thuong c?a %d v� %d l�: %.2f\n", num1, num2, quotient);
    //Ket thuc truong trinh
    return 0;
}

