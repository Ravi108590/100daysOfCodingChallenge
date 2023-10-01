#include<iostream>
#include<string>

using namespace std;

string uppertoLowerToUpper(string str)
{
	int i;
	string tempString = "";
	
	for(i = 0; i<str.length(); i++)
	{
		if(str[i] >= 'A' && str[i]<= 'Z')
		{
		  tempString += char(int(str[i]) + 32);
		}
		    
		if(str[i] >= 'a' && str[i] <= 'z')
		{
		  tempString += char(int(str[i]) - 32);
		}
	}
	
	return tempString;
}
int main()
{
	string str;
	cout<<"Enter the String:"<<endl;
	getline(cin, str);
	string result = uppertoLowerToUpper(str);
	cout<<"Converted String::--->"<<result;
	return 0;
}
