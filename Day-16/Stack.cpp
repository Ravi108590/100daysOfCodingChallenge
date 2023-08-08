#include<iostream>

using namespace std;

int arr[30], top = -1; // top is used for the index of the data
void push(int data) // inserting the data into the stack
{
	top+=1; // incrementing the top for inserting the data
	arr[top] = data;
}

void pop() // deleting the data
{
	if(top == -1) // during the empty stack 
	  cout<<"Empty stack"<<endl;
	else
	{
		top--; // decrementing the index's data
	}
}

void display() // displaing the data of the stack
{
	for(int i = top; i>=0; i--)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{

	push(20);
	push(30);
	push(40);
	cout<<"All the inserted data"<<endl;
	display();
	pop();
	cout<<"After deleting the one data"<<endl;
	display();
	return 0;
}
