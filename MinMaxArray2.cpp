#include<iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int n){
    struct Pair minmax;
    int i;
    //If n is even
    if(n%2==0){
        if(arr[0]>arr[1]){
            minmax.max=arr[0];
            minmax.min=arr[1];
        }
        else{
            minmax.max=arr[1];
            minmax.min=arr[0];
        }
        i=2;
    }
    //If n is odd
    else{
        minmax.max=arr[0];
        minmax.min=arr[0];
        i=1;
    }

    while(i<n-1){
        if(arr[i]>arr[i+1]){
            if(arr[i]>minmax.max)
                minmax.max=arr[i];
            else if(arr[i+1]<minmax.min)
                minmax.min=arr[i+1];
        }
        else{
            if(arr[i+1]>minmax.max)
                minmax.max=arr[i+1];
            else if(arr[i]<minmax.min)
                minmax.min=arr[i];
        }
        i+=2;
    }
    return minmax;
}

int main(){
    int n, arr[n];
    cout<<"Please enter the length of the array:\n";
    cin>>n;
    cout<<"Enter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    struct Pair minmax = getMinMax(arr, n); 

    cout<<"Minimum element is: "<<minmax.min<<endl;
    cout<<"Maximum element is: "<<minmax.max<<endl;
}