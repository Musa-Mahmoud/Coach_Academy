#include <iostream>
#include <map>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define ll   long long


int main()
{
    FIO

    int n, s;
    map<int, int> sl, b;

    cin >> n >> s;

    while(n--)
    {
        char d;
        int p, q;

        cin >> d >> p >> q;

        if(d == 'S')
        {
            sl[p] += q;
        }
        else
        {
            b[p] += q;
        }
    }

    int sls = s, bs = s, idx = n - s;

    if(!sl.empty())
    {
        auto it = sl.begin();
        for(; it != sl.end() && sls--; it++);

        it--;
        for(; it != sl.begin(); it--)
        {
            cout << "S " << it->st << ' ' << it->nd << ENDL;
        }

        cout << "S " << it->st << ' ' << it->nd << ENDL;
    }

    if(!b.empty())
    {
        for(auto it = b.rbegin(); it != b.rend() && bs--; it++)
        {
            cout << "B " << it->st << ' ' << it->nd << ENDL;
        }
    }

    return 0;
}
