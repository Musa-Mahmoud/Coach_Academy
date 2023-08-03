#include <iostream>
#include <queue>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL)


int main()
{
    FIO;

    int t, q, n;
    queue<int> qu;

    cin >> t;

    while(t--)
    {
        cin >> q;

        if(q == 1)
        {
            cin >> n;

            qu.push(n);
        }
        else if(q == 2)
        {
            if(!qu.empty())
            {
                qu.pop();
            }
        }
        else
        {
            if(qu.empty())
                cout << "Empty!" << '\n';
            else
                cout << qu.front() << '\n';
        }

    }


    return 0;
}
