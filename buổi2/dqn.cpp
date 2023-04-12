#include<iostream>
using namespace std ;

int dq ( int n ){
   
    if (n == 0 || n == 1 )
        return 1;
        return n *dq(n-1);
}

int main (){
    int n ;
    cout << " n " ;
    cin >> n;
     int p = dq(n) ;
    cout << " cac so n : " << p << endl ;

    return 0;
} 
