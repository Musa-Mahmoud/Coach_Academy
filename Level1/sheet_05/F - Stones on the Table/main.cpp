#include <iostream>

using namespace std;

typedef unsigned short u16;
typedef signed short s16;

int main()
{
    u16 n;

    cin >> n;

    string str;

    cin >> str;

    u16 cnt = 0;

    for(u16 i = 0; i < n - 1; i++)
    {
        if(str[i] == str[i + 1])
            cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
