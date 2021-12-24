#include<iostream>
using namespace std;
int fibonacci(int) ;
int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int A) {
    int B ;
    if (A >= 0) {
        if( A == 0 ) B = 0 ;
        else if ( A == 1) B = 1 ;
        else B = fibonacci( A - 1 ) + fibonacci( A - 2 ) ;
    } 
    return B ;
}
