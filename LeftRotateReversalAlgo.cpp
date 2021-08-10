#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end);

void rotateArray(int arr[], int d, int n){
    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, n-1);
    reverseArray(arr, 0, n-1);
}

void reverseArray(int arr[], int start, int end){
    if(start>end)
        return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start+1, end-1);
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