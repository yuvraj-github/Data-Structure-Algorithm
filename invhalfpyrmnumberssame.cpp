/** 
    1 1 1 1 1 
    2 2 2 2
    3 3 3 
    4 4 
    5 
 **/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout<<i+1<<ends;
        }
        cout<<endl;
    }
    return 0;
}