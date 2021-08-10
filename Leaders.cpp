# include<iostream>
#include<bits/stdc++.h>
using namespace std;

void leaders(int a[], int n){
    vector<int> v;
    int max = a[n-1];
    v.push_back(a[n-1]);
        
    for(int i=n-2; i>=0; i--){
        if(max<=a[i]){
            max = a[i];
            v.push_back(a[i]);
        }
    }
    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
        
}

int main(){
    int n, arr[n];
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    leaders(arr, n);
    
    return 0;

}