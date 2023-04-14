//8.Viết chương trình cài đặt stack bằng mảng. Nhập vào stack 
//6 phần tử { 41, 23, 4, 14, 56, 1 }. 
//Sau đó xuất giá trị top ra khỏi stack và in các phần tử trong stack còn lại.
#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

int is_empty() {
    return top == -1;
}

int is_full() {
    return top == MAX_SIZE - 1;
}

void push(int item) {
    if (!is_full()) {
        stack[++top] = item;
    } else {
        printf("Stack is full. Cannot push item %d.\n", item);
    }
}

int pop() {
    if (!is_empty()) {
        return stack[top--];
    } else {
        printf("Stack is empty. Cannot pop item.\n");
        return -1;
    }
}

int top_value() {
    if (!is_empty()) {
        return stack[top];
    } else {
        printf("Stack is empty. No top value.\n");
        return -1;
    }
}

int size() {
    return top + 1;
}

int main() {
    // Nhập vào stack 6 phần tử
    int elements[] = {41, 23, 4, 14, 56, 1};
    int num_elements = sizeof(elements) / sizeof(elements[0]);
    for (int i = 0; i < num_elements; i++) {
        push(elements[i]);
    }

    // Xuất giá trị top ra khỏi stack
    int top_value = pop();
    printf("Gia tri top duoc xuat ra khoi stack: %d\n", top_value);

    // In các phần tử trong stack còn lại
    printf("Cac phan tu con lai trong stack: ");
    while (!is_empty()) {
        printf("%d ", pop());
    }
    printf("\n");

    return 0;
}