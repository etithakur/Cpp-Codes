#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int findUnion(int a[], int n, int b[], int m){
    set<int> s;
    for (int i=0; i< n; i++)
        s.insert(a[i]);
 
    for (int i=0; i< m; i++)
        s.insert(b[i]);
 
    return s.size();
}

int main(){

    int arr1_size, arr2_size, arr1[arr1_size], arr2[arr2_size];

    cout<<"Enter the length of array 1:"<<endl;
    cin>>arr1_size;
    cout<<"Enter the length of array 2:"<<endl;
    cin>>arr2_size;

    cout<<"Enter array_1 elements:"<<endl;
    for(int i=0; i<arr1_size; i++)
        cin>>arr1[i];
    cout<<"Enter array_2 elements:"<<endl;
    for(int i=0; i<arr2_size; i++)
        cin>>arr2[i];

    int count = findUnion(arr1, arr1_size, arr2, arr2_size);
    cout<<"Count of union elements is: "<<count;

    return 0;
}