#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void reverse(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{

    int arr[6] = {1, 4, 0, 5, -2, 15};
    int a[5] = {2, 6, 3, 9, 4};

    reverse(arr, 6);
    reverse(a, 5);

    printArray(arr, 6);
    printArray(a, 5);

    return 0;
}