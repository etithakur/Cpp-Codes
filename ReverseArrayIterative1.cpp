#include <iostream>

using namespace std;

void reverseArray(int arr[], int n){
	cout<<"Reversed array is:\n";
	for(int i=n-1; i>=0; i--)
		cout<<arr[i]<<" ";
}

int main(){
	int arr_length, arr[arr_length];
	cout<<"Please enter the length of the array:"<<endl;
	cin>>arr_length;
	
	cout<<"Enter array elements:"<<endl;
	for(int i=0; i<arr_length; i++)
		cin>>arr[i];
	reverseArray(arr, arr_length);
	
	return 0;
}
