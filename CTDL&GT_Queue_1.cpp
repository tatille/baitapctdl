#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue; // Khởi tạo Queue với kiểu dữ liệu int

    // Thêm phần tử vào cuối Queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);

    std::cout << "Queue sau khi thêm: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " "; // In giá trị ở đầu Queue
        myQueue.pop(); // Xóa phần tử ở đầu Queue
    }
    std::cout << std::endl;

    return 0;
}
