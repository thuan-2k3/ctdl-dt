// đếm số dương
#include<iostream>
using namespace std ;


int dq(int arr[], int i, int n, int dem = 0){
    if(arr[i] <= 0)
        return dem ;
    if(arr[i] > 0 )
        dem ++ ;
    return dq( arr, i++, dem, n );

}

int main (){
    int a[] = {1,-2,4,3,-5} ;
     int n = sizeof(arr) / sizeof(arr[0]) ;

    cout << " in  " << dq << endl ;
    return 0 ;

}