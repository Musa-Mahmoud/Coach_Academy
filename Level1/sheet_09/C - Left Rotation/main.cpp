#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, d;
    queue<int> q;

    cin >> n >> d;

    for(int i = 0; i < n; i++)
    {
        int temp;

        cin >> temp;

        q.push(temp);
    }

    while(d--)
    {
        q.push(q.front());
        q.pop();
    }

    for(int i = 0; i < n; i++)
    {
        cout << q.front() << ' ';

        q.pop();
    }
    cout << '\n';

    return 0;
}
