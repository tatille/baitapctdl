#include <iostream>
using namespace std;

struct MixedNumber {
    int wholePart;    // phần nguyên
    int numerator;    // tử số
    int denominator;  // mẫu số
};


// hàm tìm ước chung lớn nhất của hai số nguyên a và b
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// hàm rút gọn phân số
void reduceFraction(int &numerator, int &denominator) {
    int gcdNumber = gcd(numerator, denominator);
    numerator /= gcdNumber;
    denominator /= gcdNumber;
}

// hàm nhập hỗn số
void  (MixedNumber &mixedNum) {
    cout << "Nhap phan nguyen: ";
    cin >> mixedNum.wholePart;
    
    cout << "Nhap tu so: ";
    cin >> mixedNum.numerator;

    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> mixedNum.denominator;
    } while (mixedNum.denominator == 0);

    // rút gọn phân số
    reduceFraction(mixedNum.numerator, mixedNum.denominator);
}

// hàm xuất hỗn số
void outputMixedNumber(MixedNumber mixedNum) {
    cout << mixedNum.wholePart << " " << mixedNum.numerator << "/" << mixedNum.denominator << endl;
}