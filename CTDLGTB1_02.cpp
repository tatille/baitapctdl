#include <stdio.h>

double s(double x, int n) {
    if (n == 0) {
        return 1; // trường hợp cơ bản, s(x,0) = 1
    } else {
        double term = 1; // khởi tạo giá trị cho term
        for (int i = 1; i <= n; i++) {
            term *= x/i; // tính từng số hạng của biểu thức
        }
        return term + s(x, n-1); // tính tổng các số hạng
    }
}

int main() {
    double x;
    int n;
    printf("Nhap x: ");
    scanf("%lf", &x);
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("s(x,n) = %lf\n", s(x, n));
    return 0;
}
