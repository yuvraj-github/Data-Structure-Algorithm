#include<iostream>
using namespace std;

int main() {
    int i,j,n, arr[n], temp;
    cin>>n;

    for(i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(i=1; i<=n; i++) {
        for(j=0; j<n-i; j++) {
            if(arr[j] > arr[j+1]) {  
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }       
    }
    for(i=0; i<n; i++) {
        cout<<arr[i]<<ends;
    }
    return 0;
}