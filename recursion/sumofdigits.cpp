#include<iostream>
using namespace std;

//123 => 1+2+3= 6  // 12+3

int sumOfDigits(int n) {
    if(n==0) {
        return 0;
    }
    int lastDigit = n%10;
    int remainingPart = n/10;
    return sumOfDigits(remainingPart)+lastDigit;
}

int main() {

    int n;
    cin>>n;
    cout<<sumOfDigits(n);
}