#include<iostream>

using namespace std;

int main()
{
	int num,i, a, b;
    cout<<"Enter the number from where you want to start and end!!"<<endl;
    cin>>a>>b;
    
    for(num = a; num<=b; num++) // this loop is for variations checking
    {
    	for(i = 2; i<num; i++) // this for dividing
    	{
    		if(num%i == 0) // if dividing any number(except 1 and self) will come out of the current for loop
    		{
    			break;
			}
		}
		if(i == num) // finally if i == num
		{
			cout<<"Prime Number:"<<num<<endl;
		}
	}
}
