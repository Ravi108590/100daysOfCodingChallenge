#include<iostream>

using namespace std;

int findTwoSignificantElements(int *arr, int n)
{
   int i, j, count = 0;
   for(i = 0; i<n; i++)
   {
   	 for(j = 0; j<n; j++)
   	 {
   	 	if(arr[i] < arr[j])
   	 	{
   	 		count++;
   	 		if(count==2)
   	 		{
   	 			cout<<arr[i] <<" ";
   	 			break;
				}
			}
		}
		
		count = 0;
   }
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
	
	  
   	findTwoSignificantElements(arr, n);
	 
	  
	  return 0;
}


// finding significant elements------

//12, 23, 4, 6, 78
//
//1-> 12> 23, 78 true
//2-> 4>  6, 12, 23, 78 true
//3-> 6>  12, 23, 78 true
//4-> 23> 78(only one elements) false
//last one false

