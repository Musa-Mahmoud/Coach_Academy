#include <iostream>
#include <set>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'


int main()
{
    FIO

    int nq, queries, idx = 1;
    //       idx, money
    set<pair<int, int>> mono;
    //       money, idx
    set<pair<int, int>> poly;

    cin >> nq;

    while(nq--)
    {
        cin >> queries;

        if(queries == 1)
        {
            int m;

            cin >> m;

            mono.insert({idx, m});

            poly.insert({-1*m, idx});

            idx++;

        }
        else if(queries == 2)
        {
            auto mono_begin = mono.begin();
            cout << mono_begin->st << ' ';

            poly.erase({-1*mono_begin->nd, mono_begin->st});
            mono.erase(mono_begin);
        }
        else
        {
            auto poly_begin = poly.begin();
            cout << poly_begin->nd << ' ';

            mono.erase({poly_begin->nd, -1*poly_begin->st});
            poly.erase({poly_begin->st, poly_begin->nd});
        }

    }

    cout << ENDL;

    return 0;
}
