#include <iostream>
#include <vector>

using namespace std;

// Vector is a dynamic array
int main()
{

    vector<int> v;
    vector<int> a(5, 2);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    cout << v.at(2) << endl;

    cout << v.front() << endl;
    cout << v.back() << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.clear();

    return 0;
}