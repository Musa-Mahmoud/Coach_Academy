#include <iostream>

using namespace std;

int main()
{
    unsigned short n;
    short cnt = 0;
    string str;

    cin >> n;

    for (unsigned short i = 0; i < n; i++)
    {
        cin >> str;

        if(str[1] == '+')
            cnt++;
        else
            cnt--;
    }

    cout << cnt << "\n";

    return 0;
}
