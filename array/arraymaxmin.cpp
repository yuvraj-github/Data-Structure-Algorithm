#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n, i;
    cin>>n;
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    int arr[n];
    for(i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(i=0; i<n; i++) {
        if(arr[i] > maxNo) {
            maxNo = arr[i];
        }
        if(arr[i] < minNo) {
            minNo = arr[i];
        }
    }

    cout<<maxNo<<ends<<minNo<<endl;
    return 0;
}