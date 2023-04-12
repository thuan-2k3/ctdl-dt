#include<iostream>
using namespace std ;

int countPositive (int arr[], int size, int x)
{
if(x >= size ){
    return 0;
        }
    if (arr[x] > 0 )
{
     return 1 + countPositive(arr, size, x);
}
    return countPositive(arr, size, x+1);
}

int main (){
    int arr[] = {1,-2,3,5,-4};
    int size = sizeof(arr) / sizeof(arr[0]) ;
    int count = countPositive(arr, size, 0) ;
    cout << "dem : " << count  << endl ;
    return 0 ;

}