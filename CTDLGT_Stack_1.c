// Nhan Văn Ánh
//ngày 7/4/23
#include <stdio.h>
#define MAX_SIZE 100 // Kích thước tối đa của stack

// Khai báo cấu trúc dữ liệu Stack
typedef struct {
    int data[MAX_SIZE]; // Mảng lưu trữ dữ liệu trong stack
    int top; // Vị trí của phần tử đầu trong stack
} Stack;

// Hàm khởi tạo stack rỗng
void init(Stack* s) {
    s->top = -1;
}

// Hàm thêm giá trị vào đỉnh stack (push)
void push(Stack* s, int value) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack tran!");
    } else {
        s->data[++(s->top)] = value;
    }
}

// Hàm xóa phần tử đầu trong stack (pop)
void pop(Stack* s) {
    if (s->top == -1) {
        printf("Stack rong!");
    } else {
        s->top--;
    }
}

// Hàm kiểm tra stack có trống hay không
int isEmpty(Stack* s) {
    return (s->top == -1);
}

// Hàm lấy giá trị phần tử đầu trong stack mà không xóa nó (top)
int getTop(Stack* s) {
    if (s->top == -1) {
        printf("Stack rong!");
        return -1;
    } else {
        return s->data[s->top];
    }
}

int main() {
    Stack s; // Khởi tạo đối tượng Stack

    init(&s); // Khởi tạo stack rỗng

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);

    printf("Top of stack: %d\n", getTop(&s)); // In giá trị phần tử đầu trong stack
    pop(&s); // Xóa phần tử đầu trong stack
    printf("Top of stack after pop: %d\n", getTop(&s)); // In giá trị phần tử đầu trong stack sau khi pop

    if (isEmpty(&s)) {
        printf("Stack rong!\n"); // Kiểm tra stack có trống hay không
    } else {
        printf("Stack khong rong!\n");
    }

    return 0;
}
