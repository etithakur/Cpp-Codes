#include<iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int low, int high){
    struct Pair minmax, mml, mmr;
    int mid;
    //If there is only one element
    if(low==high){
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }
    //If there are two elements
    if(high==low+1){
        if(arr[low]>arr[high]){
            minmax.max=arr[low];
            minmax.min=arr[high];
        }
        else{
            minmax.max=arr[high];
            minmax.min=arr[low];
        }
        return minmax;
    }

    //If there are more than 2 elements
    mid=(low+high)/2;
    mml=getMinMax(arr, low, mid);
    mmr=getMinMax(arr, mid+1, high);

    //Compare minimum 
    if(mml.min<mmr.min)
        minmax.min=mml.min;
    else    
        minmax.min=mmr.min;
    //Compare maximum
    if(mml.max>mmr.max)
        minmax.max=mml.max;
    else   
        minmax.max=mmr.max;

    return minmax;
}

int main(){
    int n, arr[n];
    cout<<"Please enter the length of the array:\n";
    cin>>n;
    cout<<"Enter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    struct Pair minmax = getMinMax(arr, 0, n-1); 

    cout<<"Minimum element is: "<<minmax.min<<endl;
    cout<<"Maximum element is: "<<minmax.max<<endl;
}