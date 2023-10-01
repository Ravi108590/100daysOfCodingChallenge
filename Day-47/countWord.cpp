#include<iostream>
#include<string>

using namespace std;

int countWord(string str)
{
	int i, count = 1;
	for(i = 0; i<str.length(); i++)
	{
	   if(str[i] == ' ')
	   {
	   	count++;
	   }	
	}
	return count;
}

int main()
{
    string str;
	cout<<"Enter the String"<<endl;
	getline(cin, str);
	int result = countWord(str);
	cout<<result;	
	return 0;
}
