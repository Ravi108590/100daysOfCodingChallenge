#include<iostream>

using namespace std;

int main()
{
	int v = 40;
	int *ptr;
	ptr = &v;
	int **ptr1 = &ptr; // here pointer to ponter is used to access the single pointer
	
	cout<<*ptr<<endl; // will give the value of the pointer(40)
	cout<<ptr<<endl; // adress
	cout<<**ptr1<<endl; // value
	return 0;
}
