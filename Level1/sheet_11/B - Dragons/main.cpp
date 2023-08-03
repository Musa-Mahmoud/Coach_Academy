#include <iostream>
#include <queue>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define ll   long long


int main()
{
    int s, n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // we can use vector here instead of pq

    cin >> s >> n;

    for(int i = 0; i < n; i++)
    {
        int x, y;

        cin >> x >> y;

        pq.push({x, y});
    }

    bool win = true;
    for(int i = 0; i < n; i++)
    {
        if(s > pq.top().st)
        {
            s += pq.top().nd;

            pq.pop();
        }
        else
        {
            win = false;
            break;
        }
    }

    if(win)
        cout << "YES" << ENDL;
    else
        cout << "NO"  << ENDL;


    return 0;
}
