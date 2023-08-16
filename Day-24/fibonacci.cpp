#include<iostream>
using namespace std;

int fibonacci(int n)
{
	if(n == 0) // if nth value becomes 0 will return 0
	   return 0;
	if(n == 1) // if nth value becomes 1 will return 1
	   return 1;
	   
	return fibonacci(n-1) + fibonacci(n-2); // recursivly calling the same function
}
int main()
{
	int num;
	cout<<"Enter the number "<<endl;
	cin>>num;
	
	int result = fibonacci(num); // here passed the user input to the fibonacci series
	
	cout<<"fibonacci of the :"<<num<<": is "<<result<<endl;
	return 0;
}
