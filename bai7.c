//7.Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím. 
//Viết chương trình để sắp xếp. Sử dụng phương pháp sắp xếp cây để sắp xếp

#include <stdio.h>

// Hàm hoán đổi giá trị của hai biến
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm tạo một cây nhị phân lớn nhất từ một nút gốc cho trước
void heapify(int arr[], int n, int i) {
    int largest = i; // Khởi tạo nút lớn nhất là nút gốc
    int left = 2 * i + 1; // Chỉ số của nút con trái
    int right = 2 * i + 2; // Chỉ số của nút con phải

    // So sánh nút gốc với nút con trái và nút con phải
    // Nếu nút con lớn hơn nút gốc, thì đổi chỗ nút con đó với nút gốc
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // Nếu nút gốc không phải là nút lớn nhất, thực hiện hoán đổi
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        // Tiếp tục duyệt xuống cây con để đảm bảo tính chất heap
        heapify(arr, n, largest);
    }
}

// Hàm sắp xếp mảng bằng phương pháp heap sort
void heapSort(int arr[], int n) {
    // Xây dựng heap từ mảng đầu vào
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Tách từng phần tử lớn nhất từ heap và đưa về cuối mảng
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
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

    heapSort(arr, n);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
