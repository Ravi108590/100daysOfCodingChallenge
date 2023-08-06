#include<iostream>
// simple calculator Program
using namespace std;

int main()
{
	int num1, num2;
	char op;
	cout<<"Enter the number1 and number2"<<endl;
	cin>>num1>>num2;
	cout<<"Enter + for addition, - for subtraction"<<endl; 
	cout<<"* for multiplication and / for division"<<endl;
	cin>>op;
	// switch case
	switch(op)
	{
		case '+': // cases to declare multiple options
			cout<<"Addition:"<<num1+num2;
			break;
			
		case '-':
			cout<<"Subtraction:"<<num1-num2;
			break;
			
		case '*':
			cout<<"Multiplication:"<<num1*num2;
			break;
		case '/':
			cout<<"Division:"<<num1/num2;
			break;
// it's mendatory to declare so that user can get their input mistakes		
		default: 
			cout<<"You haven't entered correct operator";
			
	}
}
