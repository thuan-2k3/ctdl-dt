
#include<iostream>
using namespace std ;

int dq (int arr[], int i, int tong = 0, int n) {
    
    if(i>n){
        return tong;
             }
    if( arr[i] % 2 == 0){
        tong += arr[i] ;
                }
return dq(arr, i+1 ,n ,tong );

}



int main (){
    int arr[] = {3,2,5,-1,4,3,-6} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int b = dq(arr, n ) ;
cout << "tong chan la : " << b << endl ;
 return 0 ;

}