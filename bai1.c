//1.Cho mảng gồm các phần tử { 2, 3, 4, 10, 40 } nhập vào từ bàn phím.
 //Viết chương trình tìm kiếm giá trị 10. Sử dụng cài đặt tìm kiếm nhị phân để tìm kiếm.
#include <stdio.h>

// Hàm tìm kiếm nhị phân
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Nếu phần tử ở giữa mảng là giá trị cần tìm
        if (arr[mid] == x) {
            return mid;      }
        // Nếu giá trị cần tìm nhỏ hơn phần tử ở giữa mảng
        if (arr[mid] > x) {
            right = mid - 1;  }
        // Nếu giá trị cần tìm lớn hơn phần tử ở giữa mảng
        else {
            left = mid + 1;      }    }
    // Nếu không tìm thấy giá trị cần tìm
    return -1;}
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10; // Giá trị cần tìm
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1) {
        printf("Khong tim thay gia tri %d trong mang.\n", x);    } 
    else {
        printf("Gia tri %d duoc tim thay tai vi tri %d trong mang.\n", x, result);   }
return 0; }
