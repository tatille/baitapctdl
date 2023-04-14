//11.Cho mảng 1 chiều các số thực. Viết hàm đếm số lượng giá trị 
//dương trong mảng bằng phương pháp đệ quy.	

#include <stdio.h>

int demSoDuongDeQuy(float mang[], int kichThuoc) {
    // Điều kiện dừng của đệ quy: nếu kích thước mảng là 0, trả về 0
    if (kichThuoc == 0) {
        return 0;
    }
    // Nếu phần tử cuối cùng trong mảng là số dương, thì trả về 1
    // (để đếm phần tử này) cộng với số lượng các phần tử dương trong
    // mảng con (mảng không bao gồm phần tử cuối cùng) (gọi đệ quy)
    if (mang[kichThuoc - 1] > 0) {
        return 1 + demSoDuongDeQuy(mang, kichThuoc - 1);
    }
    // Nếu phần tử cuối cùng không phải số dương, thì chỉ gọi đệ quy
    // để đếm số lượng phần tử dương trong mảng con (mảng không bao
    // gồm phần tử cuối cùng)
    else {
        return demSoDuongDeQuy(mang, kichThuoc - 1);
    }
}

int main() {
    float mang[] = {1.2, -2.3, 4.5, -6.7, 8.9, 10.1};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    int soLuongDuong = demSoDuongDeQuy(mang, kichThuoc);
    printf("So luong gia tri duong trong mang la: %d\n", soLuongDuong);

    return 0;
}