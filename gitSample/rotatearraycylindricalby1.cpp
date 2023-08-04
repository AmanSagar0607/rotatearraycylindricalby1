#include <iostream>

using namespace std;

// Function to rotate the array
void rotateArray(int arr[], int n, int k)
{
    k = k % n; // Handle k > n

    // Reverse the entire array
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }

    // Reverse the first part up to k elements
    for (int i = 0; i < k / 2; i++)
    {
        swap(arr[i], arr[k - i - 1]);
    }

   
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}; // Original array
    int n = sizeof(arr) / sizeof(int); // Size of the array
    int k = 5;                         // Rotation factor

    rotateArray(arr, n, k); // Call the rotation function

    cout << "Cyclically rotated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Print the rotated array
    }
    cout << endl;

    return 0;
}
