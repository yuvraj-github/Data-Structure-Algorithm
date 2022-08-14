/** 
    1 
    0 1 
    1 0 1 
    0 1 0 1
    1 0 1 0 1
 **/

#include<iostream>
using namespace std;

int main() {
    int n, count;
    cin>>n;    
   
    for(int i=1; i<=n; i++) {
        count = 1;
        if(i%2 == 0) {
            count = 0;
        }
        for(int j=1; j<=i; j++) {
            if(count<=0) {
                cout<<0<<ends;
                count =1;
            } else {
                cout<<1<<ends;
                count =0;
            }
        }
        cout<<endl;
    }
    return 0;
}