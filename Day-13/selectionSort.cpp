// finding each time minimum elements and swapping it
// selection sort
#include<iostream>
using namespace std;
int sorting(int arr[], int n)
{
	int temp;
	for(int i = 0; i<n-1; i++){
	   	for(int j = i+1; j<n; j++){
	   		if(arr[j]<arr[i])
	   		{	// swapping the elements 
	   			temp = arr[j];
	   			arr[j] = arr[i];
	   			arr[i] = temp;
			   }
		   }
	} 
	cout<<"Sorted elements:"<<endl;
	for(int i = 0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
    int n;
	cout<<"Enter the size of the elements"<<endl;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	sorting(arr,n);
}
