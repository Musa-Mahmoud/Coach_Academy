#include <iostream>
#include <stack>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL)


int main()
{
    FIO;

    unsigned int t, q, n;
    stack<int> s;

    cin >> t;

    while(t--)
    {
        cin >> q;

        if(q == 1)
        {
            cin >> n;

            s.push(n);
        }
        else if(q == 2)
        {
            if(!s.empty())
            {
                s.pop();
            }
        }
        else
        {
            if(s.empty())
                cout << "Empty!" << '\n';
            else
                cout << s.top() << '\n';
        }

    }


    return 0;
}
