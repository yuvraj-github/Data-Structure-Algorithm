#include<iostream>
using namespace std;

/** 
 *  1
 *  1 2
 *  1 2 3
 *  1 2 3....n
**/

int printPattern(int n) {
    if(n==0) {
        return 0;
    }
    printPattern(n-1);
    for(int i=1; i<=n; i++) {
        cout<<i<<ends;
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;

    printPattern(n);
}