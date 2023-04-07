// Nhan Văn Ánh
//ngày 7/4/23
#include <stdio.h>
// Hàm đổi chỗ giữa hai phần tử
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm chia mảng và đưa phần tử chốt (pivot) về vị trí đúng
int partition(int arr[], int low, int high) {
    int pivot = arr[low];  // Chọn pivot là phần tử đầu tiên của mảng
    int left = low + 1;    // Vị trí bắt đầu của phần tử bên trái pivot
    int right = high;     // Vị trí bắt đầu của phần tử bên phải pivot

    while (1) {
        // Tìm phần tử lớn hơn pivot ở bên trái
        while (left <= right && arr[left] < pivot)
            left++;

        // Tìm phần tử nhỏ hơn pivot ở bên phải
        while (left <= right && arr[right] > pivot)
            right--;

        // Nếu left và right gặp nhau hoặc trái lớn hơn phải, thoát vòng lặp
        if (left >= right)
            break;

        // Đổi chỗ hai phần tử không đúng vị trí
        swap(&arr[left], &arr[right]);
        left++;
        right--;
    }

    // Đưa pivot về vị trí đúng
    swap(&arr[low], &arr[right]);

    return right; // Trả về vị trí của pivot
}

// Hàm đệ quy thực hiện sắp xếp nhanh
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high); // Chia mảng và lấy vị trí của pivot

        // Đệ quy sắp xếp hai nửa mảng trước và sau pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
