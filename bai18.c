//18.Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy kiểm tra mảng có thỏa mảng tính chất “toàn giá trị âm”

#include <stdio.h>

// Hàm đệ quy kiểm tra mảng có toàn giá trị âm
int isAllNegative(double arr[], int n) {
    // Trường hợp cơ bản: nếu chỉ còn 1 phần tử
    if (n == 1) {
        return arr[0] < 0;  // Trả về 1 nếu phần tử đầu tiên là số âm, ngược lại trả về 0
    }

    // Kiểm tra giá trị phần tử cuối cùng và đệ quy kiểm tra các phần tử còn lại
    return (arr[n - 1] < 0) && isAllNegative(arr, n - 1);
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

    // Gọi hàm đệ quy kiểm tra mảng có thỏa mãn tính chất "toàn giá trị âm"
    if (isAllNegative(arr, n)) {
        printf("Mang thoa man tinh chat 'toan gia tri am'\n");
    } else {
        printf("Mang khong thoa man tinh chat 'toan gia tri am'\n");
    }

    return 0;
}
