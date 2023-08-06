#include<iostream>

using namespace std;

int main()
{
	int n;
	
	// getting the input
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	if(n == 0)
	{
		cout<<"You have entered Zero"<<endl;
	}
	
	else if(n%2 == 0)
	{
		cout<<"You have entered :"<<n<<"\n"<<"and it's even number"<<endl;
	}
	
	else if(n<0)
	{
		cout<<"You have entered Minus Number:"<<n<<endl;
	}
	
	else
	{
		cout<<"You have entered number:"<<n<<"\n"<<"""and it's odd number"<<endl;
	}
	return 0;
}
