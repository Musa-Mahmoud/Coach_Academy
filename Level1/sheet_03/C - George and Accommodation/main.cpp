#include <iostream>

using namespace std;

int main()
{
    unsigned short n, p, q, cnt = 0;

    cin >> n;

    for(unsigned short i = 0; i < n; i++)
    {
        cin >> p >> q;

        if( (q - p) >= 2)
            cnt++;
    }

    cout << cnt;

    return 0;
}
