#include <iostream>
using namespace std;

struct Fraction {
    int numerator;   // t? s?
    int denominator; // m?u s?
};

// hàm nh?p phân s?
void inputFraction(Fraction &frac) {
    cout << "Nhap tu so: ";
    cin >> frac.numerator;

    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> frac.denominator;
    } while (frac.denominator == 0);
}

// hàm xu?t phân s?
void outputFraction(Fraction frac) {
    cout << frac.numerator << "/" << frac.denominator << endl;
}
int main() {
     Fraction frac;

    // Nhập phân só 
    cout << "Nhap vào phan so : " << endl;
    inputFraction(frac);
    
    // Xuất phân số 
    cout << " Phan so vua nhap la: ";
    outputFraction (frac);

    return 0;
}