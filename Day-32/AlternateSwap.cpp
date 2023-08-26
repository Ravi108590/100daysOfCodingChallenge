#include<iostream>

using namespace std;

// swapping alternate Number

int alternateSwap(int *arr, int size){
	for(int i = 0; i<size; i+=2){// here incrementing the ith value by 2
		int temp = arr[i]; // temp var for swapping
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}
	
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int size;
    cout<<"Enter the Size of the array"<<endl;	
	cin>>size;
	
	int arr[size];
	
	cout<<"Enter the Elements"<<endl;
	for(int i = 0; i<size; i++){
		cin>>arr[i];
	}
	
	cout<<"Alternate Swapes Elements"<<endl;
	alternateSwap(arr, size);
	
	return 0;
}
