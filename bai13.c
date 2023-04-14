//13.Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy đếm số lượng giá trị dương có trong mảng

	#include <stdio.h>

int demSoDuongDeQuy(float mang[], int kichThuoc, int viTri) {
    // Điều kiện dừng của đệ quy: nếu vị trí là cuối cùng của mảng, không làm gì cả
    if (viTri == kichThuoc) {
        return 0; // Trả về 0 vì không còn phần tử nào để xét
    }
    // Nếu giá trị tại vị trí hiện tại là dương, thì cộng 1 vào kết quả
    if (mang[viTri] > 0) {
        return 1 + demSoDuongDeQuy(mang, kichThuoc, viTri + 1); // Gọi đệ quy và cộng 1 vào kết quả
    } else {
        return demSoDuongDeQuy(mang, kichThuoc, viTri + 1); // Nếu không, gọi đệ quy tiếp tục
    }
}

int main() {
    float mang[] = {1.5, -2.3, 3.7, -4.2, 5.0};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    int soLuongDuong = demSoDuongDeQuy(mang, kichThuoc, 0); // Gọi hàm đệ quy đếm số lượng giá trị dương trong mảng

    printf("So luong gia tri duong trong mang: %d\n", soLuongDuong);

    return 0;
}