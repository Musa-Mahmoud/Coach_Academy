#include <iostream>

using namespace std;

int main()
{
    char ch, prev = '0';
    unsigned short n, i, cnt = 0;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> ch;

        if(ch == prev)
            cnt++;

        prev = ch;
    }

    cout << cnt << '\n';

    return 0;
}
