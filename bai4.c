//4.Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím. 
//Viết chương trình để sắp xếp. Sử dụng phương pháp sắp xếp chọn trực tiếp để sắp xếp

#include <stdio.h>
// Hàm sắp xếp mảng bằng phương pháp selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                // Tìm phần tử nhỏ nhất trong đoạn chưa được sắp xếp
                minIndex = j;       }  }
        // Đổi chỗ phần tử nhỏ nhất tìm được với phần tử đầu đoạn chưa được sắp xếp
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;    }}
int main() {
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  }
    printf("\n");
    selectionSort(arr, n);
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  }
    printf("\n");
    return 0;}