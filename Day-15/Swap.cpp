#include<iostream>

using namespace std;

void swap(int *a, int *b) // here a and b will access the address of the num1 and num2
{
	int ptr; // extra temporary variable for swapping the value
	ptr = *a;
	*a = *b;
	*b = ptr;
	
	cout<<"Value of the num1 = "<<*a<<":and value of num2="<<*b<<endl;
}
int main()
{
	int num1, num2;
	cout<<"Enter the value of the num1 and num2"<<endl;
	cin>>num1>>num2;
	cout<<"Before swapping the value of num1 and num2 is="<<num1<<"and="<<num2<<endl;
	// calling the above function
	swap(&num1, &num2);
	return 0;
}
