#include<iostream>
#include<string.h>

using namespace std;

string reverseString(string str)
{
	int i, index = 0;
	string temp_string = str; // temporary stored the string into another
	
	for(i = temp_string.length()-1; i>=0; i--)
	{
		str[index] = temp_string[i];
		index++;
	}
	return str;
}
int main()
{
    string str;
	cout<<"Enter the string"<<endl;
	getline(cin, str);
	
	cout<<"Reversed String"<<endl;
	string resultString = reverseString(str);
	cout<<resultString<<endl;	
	return 0;
}
