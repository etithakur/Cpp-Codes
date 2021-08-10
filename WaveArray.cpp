#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(vector<int>& arr, int start, int end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
}
void convertToWave(vector<int>& arr, int n){
    for(int i=0; i<n; i+=2)
        if(i+2<n)
            swap(arr, i, i+1);
        else
            swap(arr, i, n-1);
}

int main(){
    int n;
    vector<int> arr(n);
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    convertToWave(arr, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}