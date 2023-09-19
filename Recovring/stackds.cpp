#include<iostream>

using namespace std;

int arr[5];
int top = -1;

int isEmpty()
{
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull()
{
	if(top == 4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int push(int data)
{
	if(isFull())
	{
		cout<<"Sorry Your Stack Is full"<<endl;
	}
	else{
		 top++;
	     arr[top] = data;
	}
   	
}

int pop()
{
	if(isEmpty())
	{
		cout<<"Sorry Your Stack is Empty"<<endl;
	}
	return arr[top--];
	
}

int Display()
{
	for(int i = top; i>=0; i--)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{	
    cout<<"Displays Data"<<endl;
    push(12);
    push(13);
    push(14);
    
    Display();
    
    cout<<"After Deleting one Element Displaying the data"<<endl;
    pop();
    
    Display();
	
	
	
	return 0;
}


// stack required elements--------

// arr, top
