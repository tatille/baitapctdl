#include <stdio.h>

int sumEven(int arr[], int n) {
    if (n == 0) { // điều kiện dừng của đệ quy
        return 0;
    }
    if (arr[n-1] % 2 == 0) { // nếu phần tử cuối cùng của mảng là số chẵn
        return arr[n-1] + sumEven(arr, n-1); // trả về tổng của số chẵn và tiếp tục đệ quy với các phần tử còn lại của mảng
    }
    else {
        return sumEven(arr, n-1); // nếu phần tử cuối cùng không phải là số chẵn thì bỏ qua nó và đệ quy với các phần tử còn lại của mảng
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = sumEven(arr, n);
    printf("Tong so chan trong mang la: %d", sum);
    return 0;
}
