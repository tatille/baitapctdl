#include <stdio.h>
// Nhan Văn Ánh
//ngày 7/4/23
#include <string.h>
// Hàm heapify để tạo một cây heap từ một mảng
void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1; // tính chỉ số của nút con bên trái
    int r = 2 * i + 2; // tính chỉ số của nút con bên phải
//So sánh giá trị của nút hiện tại với nút con bên trái 
//và bên phải
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
// Nếu nút hiện tại không phải là nút lớn nhất
// đổi chỗ nút hiện tại với nút lớn nhất 
//và tiếp tục xử lý cây heap
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}
//Hàm heapSort để sắp xếp mảng theo thứ tự
// từ lớn đến nhỏ
void heapSort(int arr[], int n) {
    // Tạo cây heap từ mảng
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
//Đổi chỗ phần tử đầu tiên của mảng (nút lớn nhất) 
//với phần tử cuối cùng của mảng
//giảm kích thước của mảng đi 1
//và tiếp tục xử lý cây heap
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);}}
int main() {
    int n;
    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap day so: ");
// Nhập dãy số từ bàn phím
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
// Sắp xếp dãy số bằng cách sử dụng heap sort
    heapSort(arr, n);
    printf("Day so da sap xep: ");
// In dãy số đã được sắp xếp từ lớn đến nhỏ
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
