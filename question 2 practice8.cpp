#include <iostream>
int main() {
    int A[5], B[5], temp[5];
    std::cout << "Enter 5 integers for array A: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> A[i];
    }

    std::cout << "Enter 5 integers for array B: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> B[i];
    }

    // عوض کردن مقادیر عناصر
    for (int i = 0; i < 5; i++) {
        temp[i] = A[i];
        A[i] = B[i];
        B[i] = temp[i];
    }

    // چاپ مقادیر نهایی
    std::cout << "Array A after swapping: ";
    for (int i = 0; i < 5; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array B after swapping: ";
    for (int i = 0; i < 5; i++) {
        std::cout << B[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}