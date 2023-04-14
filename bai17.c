//17.Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy tính tổng các giá trị có trong mảng.

#include <stdio.h>

// Hàm đệ quy tính tổng các giá trị trong mảng
double sumRecursive(double arr[], int n) {
    // Trường hợp cơ bản: nếu chỉ còn 1 phần tử
    if (n == 1) {
        return arr[0];  // Trả về giá trị của phần tử đầu tiên
    }

    // Tính tổng phần tử cuối cùng và đệ quy tính tổng các phần tử còn lại
    return arr[n - 1] + sumRecursive(arr, n - 1);
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // Nhập giá trị cho từng phần tử trong mảng
    double arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    // Gọi hàm đệ quy tính tổng các giá trị trong mảng
    double sum = sumRecursive(arr, n);

    printf("Tong cac gia tri trong mang: %.2lf\n", sum);

    return 0;
}
