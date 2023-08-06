#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int arr[] = {10,20,30,40,50,60,70,80}; // array declaration
	
	int *ptr = arr;   //it will point the first elements of the array (point to the base address)
	
    // using for loop to increment the pointer for traversing the elements of the array
	for(int i = 0; i<8; i++)
	{
		cout<<i<<":index value="<<*ptr<<endl; // or cout<<*arr + i;
		ptr++; // incrementing the address of the ptr so that pointer can access the value
	}
	return 0;
}
