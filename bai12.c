//12.Cho mảng 1 chiều các số nguyên. Viết hàm đệ quy xuất mảng.

#include <stdio.h>

void xuatMangDeQuy(int mang[], int kichThuoc, int viTri) {
    // Điều kiện dừng của đệ quy: nếu vị trí là cuối cùng của mảng, không làm gì cả
    if (viTri == kichThuoc) {
        return;
    }
    // In giá trị của phần tử tại vị trí hiện tại
    printf("%d ", mang[viTri]);
    // Gọi đệ quy để in giá trị của phần tử tiếp theo
    xuatMangDeQuy(mang, kichThuoc, viTri + 1);
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang: ");
    xuatMangDeQuy(mang, kichThuoc, 0); // Gọi hàm xuất mảng đệ quy, vị trí ban đầu là 0
    printf("\n");

    return 0;
}
