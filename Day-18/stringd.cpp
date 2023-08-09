#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
	// diiferent way of input string
	string str2 = "Ravi kumar Pathak"; 
	string str1, str3, str4;
	
	string str(12, 'n');  // it will show 12 times ravi
	cout<<str<<endl;
	
	cout<<"Enter the string"<<endl; // 2nd way
	cin>>str1;
	cout<<str2<<endl;  // 3rd way
	
	// string functions
	
	cout<<"String functions"<<endl;
	// adding two string
	str3 = "Hello,";
	str4 = "Ravi";
	str3.append(str4); // 1st way
	cout<<str3<<endl;
	
	cout<<str1 + str2 <<endl;  // 2nd way
	
	// accessing the particuler charecter of the string
	cout<<str3[2]<<endl;
	
	// comparing the size of the string
	
	cout<<str3.compare(str4)<<endl; // if 0 then equal +(str3 >) and -(str3<)
	
	//  empty
	cout<<str3.empty()<<endl;
	
	// inserting element into the string
	
	cout<<str3.insert(3, "go")<<endl;
	
	// finding the length
	
	cout<<str3.length()<<endl;
	
	// sorting the string
	
	sort(str3.begin(),  str3.end());
	cout<<str3<<endl;
	
	return 0;
}
