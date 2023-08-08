#include<iostream>

using namespace std;

int main()
{
	int *p = new int; // declare dynamic memory which points by p variable
	*p = 100;
	
	cout<<"Value of p:"<<*p<<endl;
	cout<<"Address of the p:"<<p<<endl;
	
	delete(p); // for memeory deallocation but still it will point the memory address (dangling pointer)
	
	cout<<"value of p after deallocating:"<<*p<<endl;
	cout<<"Address of the p after deallocating:"<<p<<endl;
	
	p = new int[7]; // allocating array into the memory address of p
	
	delete[] p; // now it will delete the memory pointed by the p
	
	p = NULL ; // assigned null value so that it will not keep memory address(fully deallocation)
	
	cout<<"Address of the p after assigning the null value:"<<p<<endl;
	return 0;
}
