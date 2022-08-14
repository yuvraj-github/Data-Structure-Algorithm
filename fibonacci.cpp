#include<iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34....

int main()
{
    int n, i, sum, n1=0, n2=1;
    cin >> n;
    
    for(i=0; i<n; i++) {
        if(i==0) {
            cout<<i<<ends;
        } else if(i==1) {
            cout<<i<<ends;
        } else {
            sum = n1+n2;
            cout<<sum<<ends;
            n1=n2;
            n2=sum;
        }
    }
    return 0;
}