#include <iostream>
using namespace std;

struct Polynomial(){
 int a; //hệ số a 
 int n; // số mũ n
};



// hàm nhập đơn thức 
void inputPolynomial( Polynomial &p) {
    cout << "Nhap vao he so a : ";
    cin >> p.a;
    
    cout << "Nhap vao so mu n: ";
    cin >> p.n;


}

// hàm xuất đơn thức
void outputPolynomial(Polynomial p) {
    cout << " p.a << "x" "^" p.n" << endl;
}
int main() {
    Polynomial p;

    // Nhập đơn thức
    cout << "Nhap vào he so a : " << endl;
    inputPolynomial(p);

    // Xuất đơn thức 
    cout << " Don thuc vua nhap la: ";
    outputPolynomialt(p);

    return 0;
}