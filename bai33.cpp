#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;

    int a[n];
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sắp xếp các số lẻ tăng dần nhưng giữ nguyên vị trí của các số chẵn
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] % 2 == 1 && a[j] % 2 == 1 && a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Mang sau khi sap xep:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
