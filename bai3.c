//3.Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím. 
//Viết chương trình để sắp xếp. Sử dụng phương pháp sắp xếp đổi chỗ trực tiếp để sắp xếp
#include <stdio.h>
// Hàm sắp xếp mảng bằng phương pháp bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) { 
 if (arr[j] > arr[j + 1]) {
                // Đổi chỗ hai phần tử nếu thứ tự không đúng
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;   }    } }}

int main() {
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);   }
    printf("\n");
    bubbleSort(arr, n);
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    printf("\n");
    return 0;}