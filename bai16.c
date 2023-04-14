//16.Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy tính tổng các giá trị dương có trong mảng

#include <stdio.h>

// Hàm đệ quy tính tổng các giá trị dương trong mảng
double sumPositiveRecursive(double arr[], int n) {
    // Trường hợp cơ bản: nếu chỉ còn 1 phần tử
    if (n == 1) {
        // Nếu giá trị là dương thì trả về giá trị đó, ngược lại trả về 0
        return (arr[0] > 0) ? arr[0] : 0;
    }

    // Nếu giá trị hiện tại là dương thì cộng vào tổng và đệ quy tính tổng phần tử tiếp theo
    if (arr[n - 1] > 0) {
        return arr[n - 1] + sumPositiveRecursive(arr, n - 1);
    } else {
        // Ngược lại, chỉ đệ quy tính tổng phần tử tiếp theo
        return sumPositiveRecursive(arr, n - 1);
    }
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

    // Gọi hàm đệ quy tính tổng các giá trị dương trong mảng
    double sum = sumPositiveRecursive(arr, n);

    printf("Tong cac gia tri duong trong mang: %.2lf\n", sum);

    return 0;
}
