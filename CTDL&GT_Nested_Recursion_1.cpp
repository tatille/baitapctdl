#include <stdio.h>

// Hàm tính giá trị của biểu thức đệ quy lồng nhau
int nested_recursion(int n) {
    if (n <= 0) {
        return 1;
    } else {
        return nested_recursion(nested_recursion(n - 1)); // Gọi lại chính hàm với đầu vào là kết quả của đệ quy trước đó
    }
}

int main() {
    int n = 3;
    int result = nested_recursion(n);
    printf("Ket qua: %d\n", result);

    return 0;
}
