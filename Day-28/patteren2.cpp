#include<iostream>
using namespace std;

int main()
{
	int size, i, j;
	cout<<"Enter the size of row and column"<<endl;
	cin>>size;
	
	cout<<"Patteren:"<<endl;
	char ch = 'A';
	for(i = 0; i<size; i++)
	{
		for(j = 0; j<size; j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
