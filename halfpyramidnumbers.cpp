#include<iostream>
using namespace std;

/** 
    1 
    2 2 
    3 3 3
    4 4 4 4
    5 5 5 5 5 
**/

int main() {
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<i<<ends;
        }
        cout<<endl;
    }

    return 0;
}