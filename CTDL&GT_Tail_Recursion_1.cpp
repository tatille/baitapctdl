#include <stdio.h>

// Hàm tính tổng các số từ 1 đến n bằng đệ quy đuôi
int tail_recursion(int n, int sum) {
    if (n <= 0) {
        return sum;
    } else {
        return tail_recursion(n - 1, sum + n); // Gọi lại chính hàm với đầu vào mới
    }
}

int main() {
    int n = 5;
    int result = tail_recursion(n, 0);
    printf("Tong cac so tu 1 den %d la: %d\n", n, result);

    return 0;
}
