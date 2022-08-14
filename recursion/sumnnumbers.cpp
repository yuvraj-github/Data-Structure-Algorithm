#include<iostream>
using namespace std;

//1+2+3+......+n-1+n

int sumUptoN(int n) {
    if(n==0) {
        return 0;
    }
    int sum = sumUptoN(n-1);
    return sum+n;
}

int main() {
    int n;
    cin>>n;

    cout<<sumUptoN(n);
}