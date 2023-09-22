#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sorting(int *arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
int missingMinimumElement(int *arr, int n)
{
    sorting(arr,n);
    int i;
    for(i = 0; i<n-1; i++)
    {
        if(arr[i]<arr[i+1] && arr[i+1] != arr[i]+1)
        {
            cout<<arr[i]+1<<endl;
            break;
        }
    }
    
}
int main() {
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter the elements"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Minimum missing element is:"<<endl;
    missingMinimumElement(arr,n);

    return 0;
}
