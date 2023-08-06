#include<iostream>

using namespace std;

int main()
{
	int value = 20;
	int *ptr; // here ptr data type should be as value type (int)
	ptr = &value; // assigning address of value to the ptr
	cout<<ptr<<endl; // it will print the address of the value
	cout<<&ptr<<endl; // it will print the address of the ptr
	cout<<*ptr<<endl;  // it will print the value stored into the ptr
	
	*ptr = 30;
	cout<<*ptr<<endl; // it will return the updated value 30
	
	// appling increment and decrement to the pointer
	ptr++; // address will increase as per data type
	++ptr; // address will increase;
	
	cout<<ptr<<endl;
	// note we can't increase the value of the pointer as shown below
	// it will generate the random value , because it initlizes once (solution we can traverse the array)
	*ptr++; 
	++*ptr;
	cout<<*ptr<<endl;
}
