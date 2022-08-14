#include<iostream>
using namespace std;

// 0 1 1 2 3 5 8 13....
/**  
 f5 = f4+f3
 f4 = f3+f2
 f3 = f2+f1
**/

int fibonaccii(int n) {
    if(n==0) {
        return 0;
    } else if(n==1) {
        return 1;
    } else {
        return (fibonaccii(n-1)+fibonaccii(n-2));
    }
}

int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        cout<<fibonaccii(i)<<ends;
    }
}