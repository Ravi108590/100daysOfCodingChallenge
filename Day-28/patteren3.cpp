#include<iostream>
using namespace std;

int main()
{
	int size, i, j;
	cout<<"Enter the size of row and column"<<endl;
	cin>>size;
	
	cout<<"Patteren:"<<endl;
	char ch = 'A';
	for(i = 1; i<=size; i++)
	{
		for(j = 1; j<=i; j++){
			cout<<ch<<" ";
		}
		cout<<endl;
		ch++;
	}
	return 0;
}
