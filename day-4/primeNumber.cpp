#include<iostream>

using namespace std;

int main()
{
	int num, i;
	cout<<"Enter the number to check that it is prime or not"<<endl;
	cin>>num;
	
	for(i = 2; i<num; i++) // it will check till the end-1
	{
		if(num%i == 0)
		{
		    cout<<"Non Prime Number"<<endl;
			break;
		}
		
	}
	if(i == num)
	{
		cout<<"Prime Number"<<endl;
	}
}
