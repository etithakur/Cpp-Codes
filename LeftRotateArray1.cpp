#include<iostream>
using namespace std;

void rotateOneByOne(int arr[], int n);

void rotateArray(int arr[], int d, int n){
    for(int i=0; i<d; i++)
        rotateOneByOne(arr,n);
}

void rotateOneByOne(int arr[], int n){
    int temp=arr[0];
    for(int i=0; i<n-1; i++)
        arr[i]=arr[i+1];
    arr[n-1] = temp;
}

void printArray(int arr[], int n){
    cout<<"Rotated array is:\n";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main(){
    int n, d, arr[n];
    cout<<"Enter the length of array:\n";
    cin>>n;
    cout<<"Enter the rotations:\n";
    cin>>d;
    cout<<"Enter the array elements that you want to put in your array:\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    rotateArray(arr, d, n);
    printArray(arr, n);
}