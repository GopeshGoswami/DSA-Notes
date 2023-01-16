#include <iostream>
#include <queue>

using namespace std;

int main()
{

    queue<string> q;

    q.push("Gopesh");
    q.push("Goswami");
    q.push("Developer");

    cout << "First Element: " << q.front() << endl;
    q.pop();
    cout << "First Element: " << q.front() << endl;

    cout << "Size: " << q.size() << endl;

    return 0;
}