//21.Tính T(n) = 1 x 2 x 3 x … x n


#include <stdio.h>

// Hàm tính giai thừa đệ quy
int giaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1; // Trường hợp cơ sở: 0! = 1, 1! = 1
    } else {
        return n * giaiThua(n - 1); // Tính giai thừa của n từ đệ quy
    }
}


int main() {
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    // Gọi hàm tính giai thừa và in kết quả
    int result = giaiThua(n);
    printf("Giai thua cua %d la: %d\n", n, result);

    return 0;
}
#include < stdio.h>
int timkiemnhipham (int ar[],int trai,int phai){
    while (trai<=phai) {
    int giua=trai = (phai -trai )/2;
    if (arr[giua]==x){
        return giua;
    }
    if (arr[giua]>x) 
    {
        trai=giua-1;
    
    }
    else {
    trai=giua+1;
    }

    }
    return -1;
}
int main (){
    int arr[]={2,3,4,5,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=2;

}