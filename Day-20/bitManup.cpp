#include<iostream>

using namespace std;

int main()
{
	// Left shift 
	int a = 5;
	if(a & (1<<2) ==0) //101(5) & 100 (2 * 2^1)
		cout<<"In second position value is 0"<<endl;
	else
	    cout<<"In second position value is 1"<<endl;
	    
	if(a | (1<<2) ==0) //101(5) | 100 (2 * 2^1)
		cout<<"In second position value is 0"<<endl;
	else
	    cout<<"In second position value is 1"<<endl;
	    
	    
	// Right shift
	cout<<"Right shift..............."<<endl;
	if(a & (1>>2) ==0) //101(5) & 100 (2 * 2^1)
		cout<<"In second position value is 0"<<endl;
	else
	    cout<<"In second position value is 1"<<endl;
	    
	if(a | (1>>2) ==0) //101(5) | 100 (2 * 2^1)
		cout<<"In second position value is 0"<<endl;
	else
	    cout<<"In second position value is 1"<<endl;
	
	return 0;
}
