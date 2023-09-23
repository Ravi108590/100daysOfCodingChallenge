#include<iostream>

using namespace std;

void replaceNextMulPrevious(int *arr, int n)
{
	int i,j;
	int *arrCopy;
	
	// coping all array elements to the another array
	for(i = 0; i<n; i++)
	{
		arrCopy[i] = arr[i];
	}
	for(i = 0; i<n; i++)
	{
		for(j = 0; j<n; j++)
		{
			if(j == 0)  // for initial elements there will br not any elements so elements itself multiply by next one
			{
				arr[j] = arrCopy[j] * arrCopy[j+1];
			}
			else if(j == n-1) // at the end itself multiply by previous one
			{
				arr[j] = arrCopy[j] * arrCopy[j-1];
			}
			else{ // multiply current element's previous and next and replace it to the current
				arr[j] = arrCopy[j-1] * arrCopy[j+1];
			}
		}
	}
}
int main()
{
   int n;
   cout<<"Enter the size of the elements"<<endl;
   cin>>n;
   
   int arr[n];
   cout<<"Enter the array's elements"<<endl;
   for(int i = 0; i<n; i++)
   {
   	cin>>arr[i];
	   }
	   replaceNextMulPrevious(arr, n);
	   cout<<"Solved :"<<endl;
	   for(int i = 0; i<n; i++)
	   {
	   	cout<<arr[i]<<" ";
		   }	
	return 0;
}
