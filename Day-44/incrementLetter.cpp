#include<iostream>
#include<string.h>

using namespace std;

string incrementByOneAlphabet(string str)
{
    int i , char_code;
	for(i = 0; i<str.length(); i++)
	{
	   	// converting char into the int
	   	char_code = int(str[i]);
	   	
	   	if(char_code == 122)
	   	   str[i] = char(97);
	    if(char_code == 90)
	   	   str[i] = char(65);
	   	if(char_code >=65 && char_code <90 || char_code >= 97 && char_code < 122)
	   	   str[i] = char(char_code + 1); // converting int to char
	   	
	}	
		
		return str;
}

int main()
{
	string str;
	cout<<"Enter the string"<<endl;
	getline(cin, str);
	
	cout<<"Solved String"<<endl;
	string resultString = incrementByOneAlphabet(str);
	cout<<resultString<<endl;
	return 0;
}
