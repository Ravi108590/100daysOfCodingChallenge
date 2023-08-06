#include<iostream>

using namespace std;

// function declaration
int sum(int n1, int n2)
{
    return n1+n2;	// returning the sum of the value
}

int main()
{
	int num1, num2;
	cout<<"Enter num1 and num2"<<endl;
	cin>>num1>>num2;
	
	cout<<"Number1="<<num1<<endl;
	cout<<"Number2="<<num2<<endl;
	
// calling and storing the function's value into the result
	int result = sum(num1,num2); 
	cout<<"Addition="<<result<<endl;
}


