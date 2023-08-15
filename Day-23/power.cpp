// recursivly calling function to find the power
#include<iostream>
using namespace std;

int power(int n, int p)
{
	if(p == 0){ // defined the base condition so that function calling can be stoped
		return 1;
	}
	// recursivly calling the function
	return n * power(n, p-1);
	
	
}

int main()
{
	int n , p;
	cout<<"Enter the value and value of the power"<<endl;
	cin>>n>>p;
	// calling the function
	int result = power(n, p);
	cout<<"Power value is:"<<result<<endl;
	return 0;
}
