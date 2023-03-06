#include <iostream>
using namespace std;

// Định nghĩa hàm tính giai thừa đệ quy
long tich(int n) {
    if(n == 0)
        return 1;
    return tich(n - 1) * n;
}

int main() {
    int n, S;
    cout << "Nhap n = ";
    cin >> n;

    S = tich(n); // Tính giá trị của n!
    cout << "S = " << S;

    return 0;
}
