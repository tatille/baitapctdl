//19.Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy tìm giá trị lớn nhất có trong mảng

#include <stdio.h>

// Hàm đệ quy tìm giá trị lớn nhất trong mảng
double findMax(double arr[], int n) {
    // Trường hợp cơ bản: nếu chỉ còn 1 phần tử
    if (n == 1) {
        return arr[0];  // Trả về giá trị của phần tử đầu tiên
    }

    // Tìm giá trị lớn nhất giữa phần tử cuối cùng và giá trị lớn nhất trong mảng con trước đó
    double max = findMax(arr, n - 1);
    if (arr[n - 1] > max) {
        return arr[n - 1];
    } else {
        return max;
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

    // Gọi hàm đệ quy tìm giá trị lớn nhất trong mảng
    double max = findMax(arr, n);
    printf("Gia tri lon nhat trong mang la: %lf\n", max);

    return 0;
}
