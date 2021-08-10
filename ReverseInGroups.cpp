// Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void reverseArray(vector<long long>&arr, int start, int end);

void reverseInGroups(vector<long long>& arr, int n, int k){
    int i;
    for(int i=0; i<n; i+=k){
        if(i+k<n)
            reverseArray(arr, i, i+k-1);
        else
            reverseArray(arr, i, n-1);
    }
}

void reverseArray(vector<long long>&arr, int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}
int main(){
    int n, k;
    vector<long long> arr;
    cout<<"Enter the length of the array: "<<endl;
    cin>>n;
    cout<<"Enter array elements: "<<endl;
    for(long long i=0; i<n; i++){
        long long x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Enter the size of subarray: "<<endl;
    cin>>k;

    reverseInGroups(arr, n, k);
    cout<<"Reversed array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}