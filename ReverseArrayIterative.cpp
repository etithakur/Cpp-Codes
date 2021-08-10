# include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}

void printArray(int ar[], int n){
    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
}
int main(){
    int arr_length, arr[arr_length];
	cout<<"Please enter the length of the array:"<<endl;
	cin>>arr_length;
	
	cout<<"Enter array elements:"<<endl;
	for(int i=0; i<arr_length; i++)
		cin>>arr[i];
	reverseArray(arr, 0, arr_length-1);
	printArray(arr, arr_length);
	return 0;
}
