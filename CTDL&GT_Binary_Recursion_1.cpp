#include <stdio.h>

int binary_recursion(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return binary_recursion(n-1) + binary_recursion(n-2);
    }
}

int main() {
    int n = 5;
    int result = binary_recursion(n);
    printf("Ket qua: %d\n", result);

    return 0;
}
