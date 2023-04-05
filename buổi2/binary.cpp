#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int &n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                for(int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
}

void printArray(int arr[], int n) {
    cout << "Mang da nhap: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int left, int right, int x) {
   if (right >= left) {
      int mid = left + (right - left) / 2;
      if (arr[mid] == x) {
         return mid;
      }
      if (arr[mid] > x) {
         return binarySearch(arr, left, mid - 1, x);
      }
      return binarySearch(arr, mid + 1, right, x);
   }
   return -1;
}

int main() {
   int n, x;
   cout << "nhap so phan tu trong mang: ";
   cin >> n;
   int arr[n];
   cout << "nhap cac phan tu cua mang: " << endl;
   for(int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   printArray(arr, n);
   removeDuplicates(arr, n);
   cout << "Mang sau khi xoa cac gia tri trung lap: ";
   printArray(arr, n);
   cout << "nhap gia tri can tim: ";
   cin >> x;
   int result = binarySearch(arr, 0, n - 1, x);
   if (result == -1) {
      cout << "Khong tim thay " << x << " trong mang" << endl;
   }
   else {
      cout << x << " co trong mang tai vi tri " << result << endl;
   }
   return 0;
}
