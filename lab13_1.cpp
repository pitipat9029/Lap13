#include<iostream>
#include<ctime>
using namespace std;
long long int fibonacci(int) ;
int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long int fibonacci(int A) {
    long long int  B ;
    if (A >= 0) {
        if( A == 0 ) B = 0 ;
        else if ( A == 1) B = 1 ;
        else B = fibonacci( A - 1 ) + fibonacci( A - 2 ) ;
    } 
    return B ;
}
