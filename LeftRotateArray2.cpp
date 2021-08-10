# include <iostream>
using namespace std;

void rotateArray(int arr[], int d, int n){
    int temp[n], j=0;
    for(int i=0; i<d; i++)
        temp[i] = arr[i];

    for(int i=d; i<n; i++)
        arr[j++] = arr[i];
    j=0;
    for(int i=n-d; i<n; i++)
        arr[i] = temp[j++];

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