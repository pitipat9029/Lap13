#include<iostream>
using namespace std;
int gcd (int,int) ;
int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}
int gcd (int A ,int B ) {
    int C ; 
    if ( A%B == 0 ) C = B ;
    else if (A%B != 0){
        C = gcd( B , A%B ) ;
    }  
    return C ;
}