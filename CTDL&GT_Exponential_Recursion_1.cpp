#include <stdio.h>

// Hàm tính lũy thừa của số x với số mũ n
int exponential_recursion(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * exponential_recursion(x, n - 1); // Gọi lại chính hàm với số mũ giảm dần
    }
}

int main() {
    int x = 2;
    int n = 5;
    int result = exponential_recursion(x, n);
    printf("%d mu %d = %d\n", x, n, result);

    return 0;
}
