#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Max Heap
    priority_queue<int> maxi;

    // min Heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    for (int i = 0; i < maxi.size(); i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    return 0;
}