#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void immediateSmaller(int arr[], int n, int x)
    {
        int smaller=-1;
        for(int i=0; i<n; i++){
            if(arr[i]<x && arr[i]>smaller)
                smaller=arr[i];
        }
        cout<<smaller;
    }

int main(){
    int n, arr[n];
    int s;
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Enter the value:"<<endl;
    cin>>s;

    immediateSmaller(arr, n, s);
    return 0;
}