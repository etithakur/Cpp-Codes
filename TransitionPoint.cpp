/* Given a sorted array containing only 0s and 1s, find the transition point.
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void findTransition(int arr[], int n){
    if(arr[n-1]==0){
        cout<<"-1";
        return;
}
    int count=0;
    for(int i=0; i<n-1; i++){
        if(arr[i]==0)
            count++;
        else
            break;
    }
    cout<<count;
}
int main(){
    int n, arr[n];
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    findTransition(arr, n);
    return 0;
}