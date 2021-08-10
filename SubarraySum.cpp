#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subarraySum(int arr[], int n, int s){
    vector<int> l;
    int currentSum=arr[0], start=0;
    for(int i=1; i<=n; i++){
        while(currentSum > s && start < i-1 ){
            currentSum = currentSum - arr[start];
            start++;
        }
        if(currentSum==s){
            l.push_back(start+1);
            l.push_back(i);
            cout<<l[0]<<" "<<l[1];
            return;
        }
        if(i<n)
            currentSum+=arr[i];
    }
    cout<<"-1";
}

int main(){
    int n, arr[n];
    long long s;
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    cout<<"Enter the sum:"<<endl;
    cin>>s;
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    subarraySum(arr, n, s);

    return 0;
}