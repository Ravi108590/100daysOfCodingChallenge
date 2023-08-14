// how many numbers are divisible by 5 and 7 in between 1 to 100

#include<iostream>

using namespace std;

int main()
{
	int c1 = 0, c2 = 0, c3 = 0;
	int totalNumber;
	for(int i = 1; i<100; i++)
	{
		if(i%5 == 0)
		   c1++;
		if(i%7 == 0)
		   c2++;
		if(i%5 == 0 && i%7 == 0)
		   c3++;
		
	}
	
	totalNumber = c1+c2-c3;
	cout<<"Total Number divided by 5 and 7 is:"<<totalNumber<<endl;
	return 0;
}
