#include<iostream>
#include<climits>
using namespace std;

int main() {
  int n, i,j,arr[n], temp;
  cin>>n;
  for(i=0; i<n; i++) {
    cin>>arr[i];
  }
  for(i=0; i<n-1; i++) {
    for(j=i+1; j<n; j++) {
        if(arr[i] > arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
  }
  for(i=0; i<n; i++) {
    cout<<arr[i]<<ends;
  }
  return 0;
}