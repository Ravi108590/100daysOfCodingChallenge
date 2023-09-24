#include<iostream>

using namespace std;

void swapping(int *a, int *b)
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
				swapping(&arr[j], &arr[j+1]);
			}
		}
	}
}
void arrangingZeroOnes(int *arr, int n)
{
	sorting(arr, n);
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
