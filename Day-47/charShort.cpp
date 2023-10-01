#include<iostream>
#include<string>

using namespace std;

void swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
string shortChar(string str)
{
	int i, j;
	string temp_string;
	
	for(j = 0; j<str.length(); j++)
	{
		for(i = 0; i<str.length()-j-1; i++)
	{
		if(int(str[i]) > int(str[i+1])) // converting into the ASIC Value 
		{
		   swap(&str[i] , &str[i+1]);	
		}
	}
	}
	return str;
}

int main()
{
	string str;
	cout<<"Enter the String"<<endl;
	getline(cin, str);
	string result = shortChar(str);
	
	cout<<"Solved:-----"<<endl;
	cout<<result;
	
	return 0;
}
