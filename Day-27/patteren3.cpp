#include<iostream>

using namespace std;

int main()
{
	int size, i, j; // both row and column is same
	cout<<"Enter the size of the row and column:"<<endl;
	cin>>size;
	
	int num;
	
	cout<<"Created Pattern"<<endl;
	
	for(i = 1; i<=size; i++)
	{
		num = i;
		for(j = 1; j<=i; j++){
			
			cout<<num<<" ";
			num--;
		} 
		cout<<endl;
	}
	
	
}
