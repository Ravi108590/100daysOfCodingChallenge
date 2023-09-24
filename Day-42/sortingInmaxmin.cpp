//Original array: 0 1 3 4 5 6 7 8 10 
//Array elements after rearranging: 10 0 8 1 7 3 6 4 5 
#include<iostream>
using namespace std;

void arrangingMaxMin(int *arr, int n)
{
	int i, j = 0, val = 1;
	int *arrCollection = new int[n]; // allocating the memory for the array size of n
	
	// in this loop shifting the last elements into the begining after one elements gap
	for(i = 0; i<n / 2; i++)
	{
	   arrCollection[j] = arr[n-val]; // last element to the first
	   j++;
	   arrCollection[j] = arr[i]; // then firstElement after last element of the array
	   j++;
	   val++;
	}
	
	if(n%2!=0)
	  arrCollection[j] = arr[n / 2];
	
    // coping the elements from one array to another array
    for(i = 0; i<n; i++)
    {
    	arr[i] = arrCollection[i]; // if odd then middle element will be remaining so this is setting into the last position
	}
	
	delete[] arrCollection; // after successfully completion of the code deleting the created memeory
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
	arrangingMaxMin(arr,n);
	
	cout<<"Solved"<<endl;
	for(i = 0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
