#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    // d.pop_back();

    // Print First Index
    cout << d.at(1) << endl;

    return 0;
}