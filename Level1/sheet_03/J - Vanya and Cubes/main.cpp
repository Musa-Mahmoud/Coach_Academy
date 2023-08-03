#include <iostream>

using namespace std;

int main()
{
    short n, i = 1, cnt = 0;

    cin >> n;

    while (n > 0)
    {
        n -= (i * (i + 1) ) >> 1;
        i++;

        if(n >= 0)
            cnt++;
    }

    cout << cnt;

    return 0;
}
