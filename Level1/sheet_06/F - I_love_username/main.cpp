#include <iostream>

using namespace std;

int main()
{
    unsigned short i, n, in, mx = 0, mn = 65535, cnt = 0;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> in;

        if( (in > mx) || (in < mn) )
            cnt++;

        mx = (in > mx)? in : mx;
        mn = (in < mn)? in : mn;
    }

    cout << cnt - 1 << '\n';


    return 0;
}
