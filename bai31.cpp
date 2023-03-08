#include <iostream>
using namespace std;

void Saptang(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int pt = arr[i];
        int j = i - 1;

        
        while (j >= 0 && arr[j] > pt) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pt; 
        }
}

int main() {
    int arr[] = { 1, 5, 16, 29, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    Saptang(arr, n);

    cout << "Mang da sap xep tang dan la: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
