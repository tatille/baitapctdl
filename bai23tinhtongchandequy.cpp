#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Hàm đệ quy tính tổng các số chẵn trong mảng
int tinhTongChanDeQuy(int mang[], int kichThuoc) {
  if (kichThuoc == 0) {
    return 0;
  } else {
    if (mang[kichThuoc-1] % 2 == 0) {
      return mang[kichThuoc-1] + tinhTongChanDeQuy(mang, kichThuoc-1);
    } else {
      return tinhTongChanDeQuy(mang, kichThuoc-1);
    }
  }
}

int main() {
  int kichThuoc;
  cout << "Nhap kich thuoc cua mang: ";
  cin >> kichThuoc;
  int mang[kichThuoc];
  srand(time(NULL));

  // Nhập mảng ngẫu nhiên
  cout << "Mang ngau nhien la: ";
  for (int i = 0; i < kichThuoc; i++) {
    mang[i] = rand() % 10 + 1;
    cout << mang[i] << " ";
  }

  // Gọi hàm đệ quy tính tổng các số chẵn trong mảng
  int tongChan = tinhTongChanDeQuy(mang, kichThuoc);

  cout << "\nTong cac so chan trong mang la: " << tongChan << endl;

  return 0;
}
