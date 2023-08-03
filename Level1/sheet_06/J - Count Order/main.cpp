#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char ch;
    int a = 0, b = 0, ans = 0, cnt = 0;
    unsigned short n, i;

    cin >> n;

    string str, p, q;

    for(i = 0; i < n; i++)
    {
        cin >> ch;

        p += ch;
    }

    for(i = 0; i < n; i++)
    {
        cin >> ch;

        q += ch;
    }

    for(i = 1; i <= n; i++)
        str.push_back(i + '0');

    //cout << str << '\n' << p << '\n' << q << '\n';

    do{
        if(p == str) a = cnt;
        if(q == str) b = cnt;

        if(a >= 0 && b >= 0) ans = abs(a - b);

        cnt++;

    } while( next_permutation(str.begin(), str.end()) );

    cout << ans << '\n';

    return 0;
}
