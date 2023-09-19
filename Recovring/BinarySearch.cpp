#include<iostream>

using namespace std;

int binarySearch(int *arr, int key, int start, int end)
{
 int mid = (start+end)/2;
 
 for(int i = start; i<end; i++){
 	if(arr[mid] == key)
 	{
 		return mid;
 		break;
	 }
	 else if(arr[mid] < key)
	 {
	 	mid++;
	 }
	 else if(arr[mid]>key){
	 	mid--;
	 }
	 else{
	 	return 0;
	 }
 }	
}

int main()
{
	int n, key;
	cout<<"Enter the size of the array and value"<<endl;
	cin>>n>>key;
	
	int arr[n];
	
	cout<<"Enter the Elements"<<endl;
	for(int i = 0; i<n; i++){
		
		cin>>arr[i];
	}
	
	int result = binarySearch(arr,key, 0, n);
	cout<<"Your value is found at index::"<<result;
	
	return 0;
}
