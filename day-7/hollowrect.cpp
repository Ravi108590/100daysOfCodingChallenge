#include<iostream>

using namespace std;
// Hollow rectange Program

int main()
{
	int i, j;
	
	for(i = 1; i<=5; i++) // 5 row
	{
		for(j = 1; j<=5; j++) // 5 column
		{
			if(i == 1 || i == 5 || j == 1 || j == 5)
			{
				cout<<"*";
			}
			else 
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
