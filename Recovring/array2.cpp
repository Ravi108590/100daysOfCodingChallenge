#include<iostream>
using namespace std;

int sortingElements(int *arr, int n)
{
	int i, j;
	for(i = 0; i<n; i++)
	{
	  for(j = 1; j <= n-i-1; j++) // everyTime leaving the last elements as it becomes the heighest and located into the right place
	  {
	  	if(arr[j] > arr[j+1])
	  	{
	  		int temp;
	  		temp = arr[j];
	  		arr[j] = arr[j+1];
	  		arr[j+1] = temp;
	  		
		  }
	  }
		
	}
}
int thirdLargest(int *arr, int n){
	

   if(n < 3)
    {
        cout << "Array has less than 3 elements." << endl;
        return -1; // Return a special value to indicate an error
    }

    // Sort the elements
    sortingElements(arr, n);

    // The third largest element is at index n - 3 (0-based index)
    return arr[n - 3];
}

int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter the Array's elements"<<endl;
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	
	int result = thirdLargest(arr,n);
	if(result == -1)
	{ 
		cout<<"Empty "<<endl;
	}
	
	else{
		cout<<"Third Largest Elements"<<result;
	}
	
	return 0;
}




// 1 4 5 3 8 0 9
// after sorting---0 1 3 4 5 8 9

// sorting------

//1 4 3 5 0 8 9------1
//1 3 4 0 5 8 9------2
//1 3 0 4 5 8 9------3
//1 0 3 4 5 8 9------4
//0 1 3 4 5 8 9------5
