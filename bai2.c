//2.Cho mảng gồm các phần tử { 2, 3, 4, 10, 40 } nhập vào từ bàn phím. 
//Viết chương trình tìm kiếm giá trị 10. Sử dụng cài đặt tìm kiếm tuyến tính để tìm kiếm.
#include <stdio.h>

// Hàm tìm kiếm tuyến tính
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;        }}
    // Nếu không tìm thấy giá trị cần tìm
    return -1;}
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10; // Giá trị cần tìm
    int result = linearSearch(arr, n, x);
    if (result == -1) {
        printf("Khong tim thay gia tri %d trong mang.\n", x);   } else {
        printf("Gia tri %d duoc tim thay tai vi tri %d trong mang.\n", x, result);   }
return 0;}
