#include<iostream>

using namespace std;

int bubbleSort(int *arr, int n)
{
	int i, j;
	
	for(i = 1; i<=n; i++)
	{
		for(j = 0; j<n-i; j++) // here leaves last elements in each iteration
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j]   = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	// showing the data
	for(i = 0; i<n; i++)
	{
		cout<<arr[i]<<"  ";
	}
}

int main()
{
	int arr[] = {-3, -4, 0, 7, 2, 1};
	
	// finding the length
	int size = sizeof(arr) / sizeof(arr[0]);
	
	bubbleSort(arr, size);
	return 0;
}

//-3, -4, 0, 7, 2, 1
//-4, -3, 0, 7, 2, 1
//-4, -3 ,0, 7, 2, 1;
//-4, -3, 0, 2, 7, 1
//-4, -3, 0, 2, 1, 7 (here in each iteration maximum elements and then just less then coming to the end so need to skip every time last element) 
