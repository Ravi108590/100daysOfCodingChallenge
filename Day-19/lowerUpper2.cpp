#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
	string str;
	cout<<"Enter the string"<<endl;
	cin>>str;
	
	// using built in algorithms
	
	// for upper case
	transform(str.begin(), str.end(), str.begin(), :: toupper);
	cout<<str<<endl;
	
	// for lower case
	transform(str.begin(), str.end(), str.begin(), :: tolower);
	cout<<str<<endl;
	
	return 0;
}
