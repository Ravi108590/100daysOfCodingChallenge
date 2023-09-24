#include<iostream>
using namespace std;

void arrangingZeroOnes(int *arr, int n)
{
	int i, countZero = 0;
	
	// counting the number of zeroes
	for(i = 0; i<n; i++)
	{
		if(arr[i] == 0)
		  countZero++;
	}
	
	// after counting, looping it till numberofzero's available giving value 0
	for(i = 0; i<countZero; i++)
	   arr[i] = 0;
	   
	// in remaining setting the value 1 (n - currentZero = remaining space)
	for(i = countZero; i<n; i++)
	   arr[i] = 1;
}

int main()
{
	int n,i;
	cout<<"Enter the Size array"<<endl;
	cin>>n;
	int arr[n];
	
	cout<<"Enter the elements"<<endl;
    for(i = 0; i<n; i++)
    {
    	cin>>arr[i];
	}
	arrangingZeroOnes(arr,n);
	
	cout<<"Solved"<<endl;
	for(i = 0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
