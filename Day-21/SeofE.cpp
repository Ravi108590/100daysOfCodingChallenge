#include<iostream>

using namespace std;

int sieveEratosth(int n)
{
	int prime[100] = {0};  // initilize the array with zero (at the begining 0 will reflect to the all indexes)
	int i,j;
	for(i = 2; i<=n; i++) // i = 2 due to prime number starts from 2
	{
		if(prime[i] == 0) // if unmarked then
		{
			for(j = i*i; j<=n; j+=i)
			{
				prime[j] = 1; // here if found divisible from the ith number will marked as 1 
			}
		}
	}
	
	// going tp print that number which has 0 (unmarked)
	for(i = 2; i<=n; i++)
	{
		if(prime[i] == 0)
		{
			cout<<i<<" ";
		}
	}cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter the Size till you want make the arrray"<<endl;
	cin>>n;
	
	// calling and passing the number into the function
	cout<<"All the prime numbers"<<endl;
	sieveEratosth(n);
	return 0;
}
