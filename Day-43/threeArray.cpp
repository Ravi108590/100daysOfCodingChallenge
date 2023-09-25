#include <iostream>
using namespace std;

void findmisingElementThreesortedArray(int *arrFirst, int *arrSecond, int *arrThird, int n1, int n2, int n3)
{
    int i, count = 0;
    
    // finding the minimum length of the array
    int minLength;
    
    if (n1 < n2 && n1 < n3)
        minLength = n1;
    else if (n2 < n1 && n2 < n3)
        minLength = n2;
    else
        minLength = n3;
    
    // only we need to check up to the minimum length
    for (i = 0; i < minLength; i++)
    {
        if (arrFirst[i] == arrSecond[i] && arrSecond[i] == arrThird[i])
        {
            cout << arrFirst[i] << " ";
            count++;
        }
    }
    
    if (count == 0)
        cout << "No matching element is found" << endl;
}

int main() {
    
    int n1, n2, n3;
    cout << "Enter the size of the three arrays" << endl;
    cin >> n1 >> n2 >> n3;
    
    int arrFirst[n1], arrSecond[n2], arrThird[n3];
    
    cout << "Enter the elements of the first array" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arrFirst[i];
    }
    
    cout << "Enter the elements of the second array" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arrSecond[i];
    }
    
    cout << "Enter the elements of the third array" << endl;
    for (int i = 0; i < n3; i++)
    {
        cin >> arrThird[i];
    }
    
    cout << "Solved" << endl;
    findmisingElementThreesortedArray(arrFirst, arrSecond, arrThird, n1, n2, n3);

    return 0;
}
