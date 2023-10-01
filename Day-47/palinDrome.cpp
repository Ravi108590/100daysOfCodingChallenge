#include<iostream>
#include<string>

using namespace std;

string reverseString(string str)
{
	int i, index = 0;
	string temp_string = str;
	for(i = str.length()-1; i>=0; i--) // revering the string 
	{
	   str[index] = temp_string[i];
	   index++;	
	}
	str[index] = '\0'; // into the last index of the string
	
	return str;
}

void palinDrome(string str)
{
	string rev = reverseString(str);
	if(rev == str)
	{
		cout<<"String is Palindrome"<<endl;
	}
	else
	{
		cout<<"String is not palindrome"<<endl;
	}
}
int main()
{
	string str;
	cout<<"Enter the String"<<endl;
	getline(cin, str);
	
	cout<<"Solution:------>"<<endl;
	palinDrome(str);
	return 0;
}
