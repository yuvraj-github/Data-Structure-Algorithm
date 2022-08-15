#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(key ==  arr[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n,i;
    cin>>n;

    int arr[n];
    for(i=0; i<n; i++) {
        cin>>arr[i];
    }

    int key;
    cin>>key;
    cout<<linearSearch(arr, n, key)<<endl;
    return 0;
}