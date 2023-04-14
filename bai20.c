//20.Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy sắp xếp các giá trị trong mảng tăng dần

#include <stdio.h>

// Hàm đổi chỗ giá trị của hai biến
void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm đệ quy sắp xếp mảng tăng dần
void selectionSortRecursive(double arr[], int n) {
    // Trường hợp cơ bản: nếu chỉ còn 1 phần tử
    if (n == 1) {
        return;
    }

    // Tìm giá trị nhỏ nhất trong mảng con trước đó
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Nếu giá trị nhỏ nhất không nằm ở vị trí đầu tiên, hoán đổi giá trị đầu tiên với giá trị nhỏ nhất
    if (minIndex != 0) {
        swap(&arr[0], &arr[minIndex]);
    }

    // Đệ quy sắp xếp mảng con từ phần tử thứ 2 đến phần tử cuối cùng
    selectionSortRecursive(&arr[1], n - 1);
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

    // Gọi hàm đệ quy sắp xếp mảng tăng dần
    selectionSortRecursive(arr, n);

    // In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%lf ", arr[i]);
    }
    printf("\n");

    return 0;
}
