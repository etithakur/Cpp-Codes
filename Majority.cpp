#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void majorityWins(int arr[], int n, int x, int y) {
    int countx=0, county=0;
    for(int i=0; i<n; i++){
        if(arr[i]==x)
            countx++;
        else if(arr[i]==y)
            county++;
    }
    if(countx>county)
        cout<<x;
    else if(county>countx)
        cout<<y;
    else
        cout<<min(x,y);
}

int main(){
    int n, arr[n];
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int x, y;
    cout<<"Enter the value of x:"<<endl;
    cin>>x;
    cout<<"Enter the value of y:"<<endl;
    cin>>y;

    majorityWins(arr, n, x, y);
    return 0;
}