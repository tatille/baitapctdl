//10.Cho mảng 1 chiều các số nguyên. Viết hàm tính tổng các số chẵn 
//trong mảng bằng phương pháp đệ quy.

#include <stdio.h>

int tinhTongChanDeQuy(int mang[], int kichThuoc) {
    // Điều kiện dừng của đệ quy: nếu kích thước mảng là 0, trả về 0
    if (kichThuoc == 0) {
        return 0;
    }
    // Nếu phần tử cuối cùng trong mảng là số chẵn, thì trả về tổng của phần tử đó
    // và tổng của các phần tử còn lại trong mảng (gọi đệ quy)
    if (mang[kichThuoc - 1] % 2 == 0) {
        return mang[kichThuoc - 1] + tinhTongChanDeQuy(mang, kichThuoc - 1);
    }
    // Nếu phần tử cuối cùng không phải số chẵn, thì chỉ gọi đệ quy để tính tổng
    // của các phần tử còn lại trong mảng
    else {
        return tinhTongChanDeQuy(mang, kichThuoc - 1);
    }
}

int main() {
    int mang[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    int tongChan = tinhTongChanDeQuy(mang, kichThuoc);
    printf("Tong cac so chan trong mang la: %d\n", tongChan);

    return 0;}
