#include<iostream>

using namespace std;
int main()
{
	// for loop
	cout<<"Executing for loop...."<<endl;
	for(int i = 0; i<5; i++)
	{
		cout<<i<<"\t";
	}
	// while loop
	cout<<endl;
	int i = 0;
	cout<<"Executing while loop"<<endl;
	while(i<5)
	{
		cout<<i<<"\t";
		i++;
	}
	// do while
	cout<<endl;
	int ii = 0;
	cout<<"Executing for do-while loop"<<endl;
	do{
		cout<<ii<<"\t";
		ii++;
	}while(ii<5);
	
}


