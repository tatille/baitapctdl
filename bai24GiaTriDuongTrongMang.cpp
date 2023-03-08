#include <iostream>
using namespace std;

int Demphantu(int a[], int size){  // mang a va kcih thuoc mang
 if(size==0){  //neu kich thuoc =0 => mang trong
  return 0;
}
int count=0; //bien dem
if (a[0]> 0){ // neu bien dem> 0
	count=1; // thi bien dem duoc 1 phan tu
 }
 return count + Demphantu (a+1, size-1); // mang tang len vi tri tiep theo, kich thuoc cua mang giam di 
}
 int main(){
 	int a[]={-1,-4,-5,-7, 5, 7, 8,4,6};
 	int size =sizeof(a)/sizeof(a[0]); // tich kich thuoc phan tu
 	int Dem = Demphantu(a,size);  //(gia tri tra ve la so chan trong mang a, kich thuoc mang)
 	cout << " so phan tu duong trong mang la " << Dem << endl;
 	return 0;
 		
 }
