#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j;
	
	for(i = 0; i<n; i++)
	{
		int min_valueAtIndex = i;  // first elements suppose to the minimum element
		for(j = i+1; j<n; j++)
		{
			if(arr[j] < arr[min_valueAtIndex])
			{
				min_valueAtIndex = j;
			}
		}
		
		// now after getting the minimum elements into the each iteration need to swap from max to min index
		swap(&arr[min_valueAtIndex], &arr[i]);
	}
	
	// displaying the elements;
	
	for(i = 0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
   	int arr[] = {-3, -4, 0, 7, 2, 1};
	
	// finding the length
	int size = sizeof(arr) / sizeof(arr[0]);
	
	cout<<"Sorted Elements(selection sort)"<<endl;
	selectionSort(arr, size);
	return 0;	
}
