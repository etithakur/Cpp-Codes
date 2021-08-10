#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void findKSmall(int arr[], int n, int k){
    sort(arr, arr+n+1);
    cout<<"K-th smallest element is: "<<arr[k-1];
}

int main(){
    int n, arr[n], k;
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Enter the value of k:"<<endl;
    cin>>k;
    findKSmall(arr, n, k);
    return 0;
}