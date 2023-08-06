#include<iostream>

using namespace std;

int main()
{
	int a = 20;
	float b = 20.34f;
	double d = 20.00;
	char c = 'a';
	string str = "Hello";
	bool bl = true;
	// sizeof() is used to know the size of the particular datatypes 
	cout<<"int has size :"<<sizeof(a)<<"\n"<<"And value:"<<a<<endl;
	cout<<"float has size :"<<sizeof(b)<<"\n"<<"And value:"<<b<<endl;
	cout<<"double has size :"<<sizeof(d)<<"\n"<<"And value:"<<d<<endl;
	cout<<"char has size :"<<sizeof(c)<<"\n"<<"And value:"<<c<<endl;
	cout<<"string has size :"<<sizeof(str)<<"\n"<<"And value:"<<str<<endl;
	cout<<"bool has size :"<<sizeof(bl)<<"\n"<<"And value:"<<bl<<endl;
}
