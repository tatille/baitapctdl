//6.Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím. Viết chương trình để sắp xếp. Sử dụng phương pháp sắp xếp nhanh để sắp xếp.
#include <stdio.h>

// Hàm đổi chỗ giá trị của hai phần tử
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm chia mảng thành 2 phần, trả về chỉ số chốt (pivot)
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Chọn phần tử cuối làm chốt
    int i = low - 1;  // Chỉ số của phần tử nhỏ hơn chốt

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]); // Đưa chốt về vị trí đúng
    return (i + 1);
}

// Hàm sắp xếp mảng theo phương pháp Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high); // Chia mảng thành 2 phần

        quickSort(arr, low, pivot - 1);  // Đệ quy sắp xếp nửa trái của mảng
        quickSort(arr, pivot + 1, high); // Đệ quy sắp xếp nửa phải của mảng
    }
}

int main() {
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, n - 1); // Gọi hàm sắp xếp Quick Sort

    printf("\nMang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
