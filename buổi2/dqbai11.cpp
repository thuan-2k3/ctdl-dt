#include<stdio.h>
using namespace std ;

int Dem ( arr[], int n ){
    int dem = 0 ;
    if(arr[n] <= 0 )
        return dem ;
    return (dem++)  ;

}

int main () {
    int arr[] = {-3,-4,-5,3,5,-2,6,-4,3,6,8};
    int n = sizeof(arr()) / sizeof(arr[0]) ;
    int dem = Dem(ar[], n ) ; 
    cout << "so phan tu lon hon 0 la: " << dem << endl;
    return 0 ;

}