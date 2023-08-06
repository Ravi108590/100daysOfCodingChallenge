#include<iostream>
#include<climits>
// finding maximum and minimum number into the array
using namespace std;

int main()
{
	int arr[30],size, maxNo = INT_MIN, minNo = INT_MAX;
	cout<<"Enter the size of the elements"<<endl;
	cin>>size;
	
	cout<<"Enter the elements"<<endl;
	for(int i = 0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	for(int i = 0; i<size; i++)
	{
		if(arr[i]>maxNo)
		    maxNo = arr[i];
		if(arr[i]<minNo)
		    minNo = arr[i];
	}
	cout<<"Maximum number:"<<maxNo<<endl;
	cout<<"Minimum Number:"<<minNo<<endl;
	return 0;
}
