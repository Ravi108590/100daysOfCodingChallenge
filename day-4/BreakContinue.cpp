#include<iostream>

using namespace std;

int main()
{
	int pocketMoney;
	cout<<"Enter you are having pocketMoney monthlywise(>300)"<<endl;
	cin>>pocketMoney;
	
	for(int time = 1; time<100; time++)
	{
		if(time%2 == 0) // here if even times will be then we can't spent money(skip)
		   continue; // it will skip the even times continue
		if(pocketMoney <= 0) // if pocket money is zero we can't go anywhere
		   break; // it will break whole loop if no money remain break
		   
		cout<<"You can still spent Money remaining:"<<pocketMoney<<endl;
		pocketMoney-=300; // deducting money each time by 300
	}
}
