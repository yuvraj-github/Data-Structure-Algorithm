#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,i;
    cin>>n;

    int flag=0;
    for(i=2; i<=sqrt(n); i++) {
        if(n%i == 0) {
            cout<<"Non prime."<<endl;
            flag=1;
            break;
        }
    }
    if(flag == 0) {
        cout<<"Prime number"<<endl;
    }

    return 0;
}