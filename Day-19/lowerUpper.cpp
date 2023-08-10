#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string str;
	cout<<"Enter the string"<<endl;
	cin>>str;
	
	// upper case converting
	for(int i = 0; i<str.size(); i++)
	{
		if(str[i] >= 97 && str[i]<=122)
		{
			str[i]-=32;
		}
	}
	
	cout<<str<<endl;
	
	// Lower case converting
	for(int i = 0; i<str.size(); i++)
	{
		if(str[i] >= 65 && str[i]<=90)
		{
			str[i]+=32;
		}
	}
	
	cout<<str<<endl;
	return 0;
}
