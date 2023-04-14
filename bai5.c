//5.Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím. 
//Viết chương trình để sắp xếp. Sử dụng phương pháp sắp xếp chèn trực tiếp để sắp xếp
#include <stdio.h>

// Hàm sắp xếp mảng bằng phương pháp insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            // Di chuyển các phần tử lớn hơn key sang phải một vị trí
            arr[j + 1] = arr[j];
            j--;
        }
        // Đặt key vào đúng vị trí
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
