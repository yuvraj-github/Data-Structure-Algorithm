#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,sum=0,lastDigit;
    cin>>n;
    int originalNumber = n;
    while(n>0) {
        lastDigit = n%10;       
        sum +=round(pow(lastDigit,3));      
        n = n/10;
    } 
    if(sum == originalNumber) {      
        cout<<"Armstrong"<<endl;
    } else {
        cout<<"Not Armstrong"<<endl;
    }
    return 0;
}