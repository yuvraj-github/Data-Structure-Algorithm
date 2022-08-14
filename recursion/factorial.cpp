#include<iostream>
using namespace std;

// Factorial of 5 = 120.
int factOfNumb(int n) {
    if(n==0){
        return 1;
    }
    return (n*factOfNumb(n-1));

}

int main() {
    int n;   
    cin>>n;

    cout<<factOfNumb(n);
}