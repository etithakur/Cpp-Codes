// Given an array of N positive integers, print k largest elements from the array. 

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> kLargest(int arr[], int n, int k)
    {
        vector<int> v;
        sort(arr, arr+n-1);
        for(int i=n-1; i>k; i--)
            v.push_back(arr[i]);
        reverse(v.begin(), v.end());
        return v;
    }

int main(){
    int n, k, arr[n];
    cout<<"Enter the length of array:"<<endl;
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter value k:"<<endl;
    cin>>k;

    vector<int> ans = kLargest(arr, n, k);
    cout<<"K-th largest elements are:"<<endl;
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";

    return 0;
}