#include <iostream>
using namespace std;

struct Point {
    float x;  // hoành độ
    float y;  // tung độ
    float z; // cao độ 
};


// hàm nhập điểm
void inputPoint(Point &p) {
    cout << "Nhap hoanh do: ";
    cin >> p.x;
    
    cout << "Nhap tung do: ";
    cin >> p.y;

    cout << "Nhap cao do: ";
    cin >> p.z;

}

// hàm xuất điểm
void outputPoint(Point p) {
    cout << "(" << p.x << ", " << p.y << "," << p.z ")" << endl;
}
int main() {
    Point p;

    // Nhập điểm
    cout << "Nhap toa do diem: " << endl;
    inputPoint(p);

    // Xuất điểm
    cout << "Toa do diem vua nhap la: ";
    outputPoint(p);

    return 0;
}