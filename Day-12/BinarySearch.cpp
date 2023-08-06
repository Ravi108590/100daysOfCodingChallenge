#include<iostream>

using namespace std;

int binarySearch(int arr[], int size, int data)
{
	int front = 0, rear = size;
	while(front<=rear)
	{
		int mid = (front+rear)/2;
		if(arr[mid] == data)
		      return mid;
		else if(arr[mid]<data)
		      front = mid + 1;
		else
		      rear = mid - 1;
	}
	return -1;
}
int main()
{
	int size, data, arr[30];
	cin>>size;
	cout<<"Enter the elements"<<endl;
	for(int i = 0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the elements to search"<<endl;
	cin>>data;
	cout<<"Index Number:"<<binarySearch(arr, size, data)<<endl;

	return 0;
}
