#include<iostream>

using namespace std;

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
	
	for(int i = 0; i<size; i++)
	{
		if(arr[i] == data)
		{
			cout<<"Your data is found at index no:"<<i;
		}
		
	}
	return 0;
}
