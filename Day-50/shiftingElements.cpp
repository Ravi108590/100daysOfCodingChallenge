#include <iostream>

using namespace std;

void rightShiftArray(int *arr, int position, int n)
{
    if (position < 0) {
        cout << "Invalid position. Position should be non-negative." << endl;
        return;
    }
    // Right shifting
        position %= n; // Ensure position is within array size
        int temp[n];

        for (int i = 0; i < n; i++) {
            temp[(i + position) % n] = arr[i];
        }

        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
}


void leftShiftArray(int *arr, int position, int n)
{
    if (position < 0) {
        cout << "Invalid position. Position should be non-negative." << endl;
        return;
    }
    //Left shifting
        position %= n; // Ensure position is within array size
        int temp[n];

        for (int i = 0; i < n; i++) {
            temp[i] = arr[(i + position) % n];
        }

        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array for right shift:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int arr1[n];
    cout << "Enter the elements of the array for left shift:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int position;
    cout << "Enter the number of positions to shift: ";
    cin >> position;

    cout << "Right Shift---->"<<endl;;
    rightShiftArray(arr, position, n);
    
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    cout << "Array after shifting:" << endl;

    cout << "Left Shift---->"<<endl;;

    leftShiftArray(arr1, position, n);

    cout << "Array after left shifting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}

