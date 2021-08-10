# include<iostream>
# include<bits/stdc++.h>

using namespace std;

int NumberofElementsInIntersection(int a[], int b[], int n, int m )
    {
        sort(a, a+n);
		sort(b, b+m);
		int i=0, j=0, count=0;
		int arr[n+m], p=0;
		while( i<n && j<m){
			if(a[i]==b[j] && arr[p-1]!=a[i]){
			    arr[p++]=a[i];
				count++;
				i++;
				j++;
			}
			else if(a[i]>b[j])
				j++;
			else
				i++;
		}
	    return count;
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

    int count=NumberofElementsInIntersection(arr1, arr2, arr1_size, arr2_size);
    cout<<"Count of intersection elements is: "<<endl<<count;

    return 0;
}