#include<iostream>

using namespace std;

int main()
{
	int num1, num2;
	cout<<"Enter the Number1 and Number2"<<endl;
	cin>>num1>>num2;
	// Binary Arithmatic Operator
	cout<<"Addition:"<<num1+num2<<endl;
	cout<<"Subtraction:"<<num1-num2<<endl;
	cout<<"Multiplication:"<<num1*num2<<endl;
	cout<<"Division:"<<num1/num2<<endl;
	cout<<"Reminder:"<<num1%num2<<endl;
	
	// Unary Arithmatic operator
	cout<<"Preincrement of num1:"<<++num1<<endl;
	cout<<"Postincrement of num1:"<<num1++<<endl;
	cout<<"Predecrement of num1:"<<--num1<<endl;
	cout<<"Postdecrement of num1:"<<num1--<<endl;
}
