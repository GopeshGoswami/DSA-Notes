#include <iostream>
using namespace std;

void LinearSearch(int arr[], int n, int key)
{
    bool isTrue = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            isTrue = true;
            break;
        }
    }

    if (isTrue) {
        cout << "Key is present in the Array";
    }
    else {
        cout << "Key is not present in the Array";
    }
}

int main()
{

    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1 };
    int key = 100;

    LinearSearch(arr, 10, key);

    return 0;
}