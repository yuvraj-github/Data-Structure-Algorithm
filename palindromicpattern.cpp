/** 
            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5  
**/

#include<iostream>
using namespace std;

int main() {
    int n,i,j,k;
    cin>>n;

    for(i=1; i<=n; i++) {
        for(j=n; j>=1; j--) {
            if(j>i) {
                cout<<"  ";
            } else {
                cout<<j<<ends;
            }
        }
        if(i==1) {
            cout<<endl;
            continue;
        }
        for(k=2; k<=i; k++) {
            cout<<k<<ends;
        }
        cout<<endl;
    }

    return 0;
}