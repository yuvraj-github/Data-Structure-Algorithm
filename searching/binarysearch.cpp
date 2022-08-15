#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int startPoint = 0;
    int endPoint = n;   

    while(startPoint<=endPoint) {
        int mid = (startPoint+endPoint)/2;
        cout<<mid<<endl;
        if(key<arr[mid]) {
            endPoint = mid-1;
        } else if(key>arr[mid]) {
            startPoint = mid+1;
        } else {
            return mid;
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

    cout<<binarySearch(arr, n, key)<<endl;
    return 0;
}