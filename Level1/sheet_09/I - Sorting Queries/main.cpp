#include <iostream>
#include <queue>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    FIO

    int t, q, x;
    queue<int> qu;
    priority_queue<int, vector<int>, greater<int>> pq;

    cin >> t;

    while(t--)
    {
        cin >> q;

        if(q == 1)
        {
            cin >> x;

            qu.push(x);
        }
        else if(q == 2)
        {
            if(pq.empty())
            {
                cout << qu.front() << '\n';

                qu.pop();
            }
            else
            {
                cout << pq.top() << '\n';

                pq.pop();
            }

        }
        else
        {
            int qs = qu.size();

            while(qs--)
            {
                pq.push(qu.front());
                qu.pop();
            }

        }

    }

    return 0;
}

/*

#include <iostream>
#include <deque>
#include <queue>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    FIO

    int t, q, x;
    deque<int> dq;
    priority_queue<int, vector<int>, greater<int>> pq;

    cin >> t;

    while(t--)
    {
        cin >> q;

        if(q == 1)
        {
            cin >> x;

            dq.push_back(x);
        }
        else if(q == 2)
        {
            if(pq.empty())
            {
                cout << dq.front() << '\n';

                dq.pop_front();
            }
            else
            {
                cout << pq.top() << '\n';

                pq.pop();
            }

        }
        else
        {
            int dqs = dq.size();

            while(dqs--)
            {
                pq.push(dq.back());
                dq.pop_back();
            }

        }

    }

    return 0;
}

*/

