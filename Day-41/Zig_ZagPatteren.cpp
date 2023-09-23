#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void zigzagPatteren(int *arr, int n)
{
	int i, j;
	for(i = 0; i<n; i++)
	{
		for(j = 1; j<n-1; j+=2) // swap on each odd number index
		{
		   swap(&arr[j], &arr[j+1]);
			}
		}
	}                                             				 	 	 
int main()
{

   int n,i;
   cout<<"Enter the size of the array"<<endl;
   cin>>n;
   
   int arr[n];
   cout<<"Enter the elements of the array"<<endl;
   for(i = 0; i<n; i++)
   {
   	cin>>arr[i];
	   }	
	   zigzagPatteren(arr, n);
	   cout<<"Solved:"<<endl;
	   for(i = 0; i<n; i++)
	   {
	   	cout<<arr[i]<<" ";
	   }
	   
	return 0;
}
