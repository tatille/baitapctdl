//15.Hãy khai báo cấu trúc dữ liệu của danh sách liên kết kép các số nguyên

// Khai báo cấu trúc dữ liệu cho một nút của danh sách liên kết kép
struct Node {
    int data; // Giá trị của nút
    Node* prev; // Con trỏ sang nút trước đó trong danh sách
    Node* next; // Con trỏ sang nút tiếp theo trong danh sách
};

