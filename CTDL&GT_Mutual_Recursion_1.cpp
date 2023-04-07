#include <stdio.h>

// Khai báo hàm trước
int function_b(int n); 

// Hàm A
int function_a(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n - function_b(function_a(n - 1)); // Gọi hàm B
    }
}

// Hàm B
int function_b(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n - function_a(function_b(n - 1)); // Gọi hàm A
    }
}

int main() {
    int n = 5;
    printf("Ket qua: %d\n", function_a(n));

    return 0;
}
