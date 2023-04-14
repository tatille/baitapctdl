//14.Hãy khai báo cấu trúc dữ liệu của cây nhị phân các số nguyên


// Khai báo cấu trúc dữ liệu cho nút của cây nhị phân
struct Node {
    int data; // Giá trị của nút
    struct Node* left; // Con trỏ sang nút con bên trái
    struct Node* right; // Con trỏ sang nút con bên phải
};
