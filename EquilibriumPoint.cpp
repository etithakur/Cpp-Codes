

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findEquilibrium(long long a[], int n){
    long long leftSum=0, sum=0;
    for(long long i=0; i<n; i++)
        sum+=a[i];

    for(long long i=0; i<n; i++){
        sum-=a[i];
        if(leftSum==sum)
        {
            cout<<i+1;
            return;
        }
        leftSum+=a[i];
    }
    cout<<-1;
    return;
}

int main(){
    long long n, arr[n];
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    for(long long i=0; i<n; i++)
        cin>>arr[i];

    findEquilibrium(arr, n);
    return 0;
}