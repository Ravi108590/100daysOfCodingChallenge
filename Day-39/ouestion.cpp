
#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sorting(int *arr, int n)
{
	int i, j;
	for(i = 0; i<n; i++)
	{
		for(j = 0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}
void waveFormArray(int *arr, int n)
{
	sorting(arr, n);
	
	for(int i = 0; i<n-1; i+=2)
	{
	 swap(&arr[i], &arr[i+1]);	
	}
	
}
int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of the array"<<endl;
	for(int i = 0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	waveFormArray(arr, n);
	
	cout<<"After the solution"<<endl;
	for(int i = 0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

