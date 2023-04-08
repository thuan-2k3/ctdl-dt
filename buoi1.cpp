#include<stdio.h>
using namespace std;

int tongchan(int arr, int n , int i=0){
    int tong = 0;
    if( i>=n ){
        return tong ;
        }
    if(a[i] %2 == 0){
        return tongchan(n, arr, i++, tong );
    }
}

int main(){
   
  int n= sizeof(arr) / sizeof(a[0]); 
  int arr ={1,2,3,5,6,7,8,90,221,232};
  int result = tongchan(arr, n);
  cout << "tong cac ptu chan la : " << result << endl ;

return 0; 

}