//9.Viết chương trình cài đặt hàng đợi bằng mảng. Nhập vào queue
 //6 phần tử { 41, 23, 4, 14, 56, 1 }. Sau đó thêm vào phần tử {55} và loại bỏ phần {23}. 
//In hàng đợi sau khi thêm và bỏ.


#include <stdio.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = 0;
int rear = -1;

int rong() {
    return front > rear;
}

int day() {
    return rear == MAX_SIZE - 1;
}

void themVaoHangDoi(int phanTu) {
    if (!day()) {
        queue[++rear] = phanTu;
    } else {
        printf("Hang doi da day. Khong the them phan tu %d.\n", phanTu);    }}

int layRaKhoiHangDoi() {
    if (!rong()) {
        return queue[front++];
    } else {
        printf("Hang doi rong. Khong the lay phan tu.\n");
        return -1;}}

int giaTriPhiaTruoc() {
    if (!rong()) {
        return queue[front];
    } else {
        printf("Hang doi rong. Khong co gia tri phia truoc.\n");
        return -1;   }}

int kichThuoc() {
    return rear - front + 1;}

int main() {
    // Nhap vao hang doi 6 phan tu
    int cacPhanTu[] = {41, 23, 4, 14, 56, 1};
    int soPhanTu = sizeof(cacPhanTu) / sizeof(cacPhanTu[0]);
    for (int i = 0; i < soPhanTu; i++) {
        themVaoHangDoi(cacPhanTu[i]);   }

    // Them phan tu 55 vao hang doi
    themVaoHangDoi(55);
    printf("Hang doi sau khi them phan tu 55: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);    }
    printf("\n");

    // Loai bo phan tu 23 khoi hang doi
    layRaKhoiHangDoi(); // Bo qua gia tri tra ve, khong can in ra
    printf("Hang doi sau khi loai bo phan tu 23: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);    }
    printf("\n");

    return 0;
}
