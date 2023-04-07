// Nhan Văn Ánh
//ngày 7/4/23
#include <stdio.h>

// Hàm tìm kiếm tuyến tính
int timKiemTuyenTinh(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Trả về chỉ số của phần tử được tìm thấy
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy
}

int main() {
    int arr[100]; // Mảng chứa dữ liệu
    int n; // Số lượng phần tử trong mảng
    int x; // Giá trị cần tìm kiếm

    // Nhập số lượng phần tử trong mảng từ người dùng
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    // Nhập giá trị cho từng phần tử trong mảng từ người dùng
    printf("Nhap cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Nhập giá trị cần tìm kiếm từ người dùng
    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &x);

    // Gọi hàm tìm kiếm tuyến tính và lưu kết quả
    int ketQua = timKiemTuyenTinh(arr, n, x);

    // In kết quả ra màn hình
    if (ketQua == -1) {
        printf("Khong tim thay %d trong mang.\n", x);
    } else {
        printf("%d duoc tim thay tai chi so %d trong mang.\n", x, ketQua);
    }

    return 0;
}
