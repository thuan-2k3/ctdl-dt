#include <iostream>
using namespace std;

void xm(int arr[], int size, int index) {
    if (index >= size) {
        return ;
    }
    cout << arr[index] << " ";
    xm(arr, size, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 4,3,2,1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    xm(arr, size, 0);
    return 0;
}
