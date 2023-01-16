#include <iostream>
using namespace std;

void printArray(char arr[], char size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int number[15] = {2, 7};

    // int numberSize = sizeof(number) / sizeof(int);

    // cout << numberSize << endl;
    // printArray(number, 15);

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    printArray(ch, 5);

    return 0;
}