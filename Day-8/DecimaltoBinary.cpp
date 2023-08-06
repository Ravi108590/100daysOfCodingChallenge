#include<iostream>

using namespace std;
// Decimal To Binary

int main()
{
	int arr[20], n, i;
	cout<<"Enter the Number:"<<endl;
	cin>>n;
	
	cout<<"Binary Repersentation of the number:"<<n<<endl;
    for(i = 0; n>0; i++)
	{
	 arr[i] = n%2; // reminder will act as a binary number
	 n = n/2; // for redusing the number (quotiant)
	
	}
	for(i = i-1 ; i>=0; i--)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
