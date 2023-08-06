#include<iostream>

using namespace std;

int main()
{
	int row, column, i, j;
	cout<<"Enter the number of row and column"<<endl;
	cin>>row>>column;
	
	int arr[row][column];
	// user Input
	cout<<"Enter the elements"<<endl;
	for(i = 0; i<row; i++){
		for(j = 0; j<column; j++){
			cin>>arr[i][j];
		}
	}
	// displaying the elements
	cout<<"Entered Elements"<<endl;
		for(i = 0; i<row; i++){
		for(j = 0; j<column; j++){
			cout<<arr[i][j]<<endl;
		}
	}
	
	return 0;
}
