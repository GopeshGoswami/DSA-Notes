#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void alternateSwap(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
            swap(arr[i], arr[i + 1]);
    }
    printArray(arr, n);
}

int main()
{

    int arr[6] = {3, 1, 2, 7, 11, 8};

    alternateSwap(arr, 6);

    return 0;
}