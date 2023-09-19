#include<iostream>

using namespace std;

int mostFrequentElements(int *arr, int n)
{
	int i,j, count, countPrev = 0;
	int temp = -1;
	
	for(i = 0; i<n; i++)
	{
		count = 1; // on each new iteration of i counter set 1
		for(j = i+1; j<n; j++) // here j = i+1 so that array out of bound eroor will not occur
		{
			if(arr[i] == arr[j])
			{
				count++;
			}
	
		}
		
		if(count>countPrev) // if getting higher frequency then updating the counter value
		{
			countPrev = count;
			temp = arr[i];          // storing mostFrequent elements then previousOne
		}
		
	}
	
	cout<<"Most Frequent Element is: "<<temp<<":: Occures ::"<<countPrev<<"::Times"<<endl;
	
	
}
int main()
{
	int n, i;
   cout<<"Enter the size of the array"<<endl;
   cin>>n;
   
   int arr[n];
   
   cout<<"Enter the array's elements"<<endl;
   for(i = 0; i<n; i++)
   {
   	cin>>arr[i];
	   }	
	   
	 mostFrequentElements(arr, n); 
	 
	return 0;
}

// mostFrequentElements

//12 23 34 5 12 23 34, 5, 34, 23, 34;
//1st iteration----
//12 -> 2 times = countPrev = 2
//23 -> 3 times = countPrev = 3
//34 -> 4 times = countPrev = 4



