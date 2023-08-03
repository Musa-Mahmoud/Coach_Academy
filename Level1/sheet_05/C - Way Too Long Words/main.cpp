#include <iostream>

using namespace std;

int main()
{
    unsigned short n;

    cin >> n;

    while(n--)
    {
        string str;

        cin >> str;

        unsigned short ss = str.size();

        if (ss > 10)
        {
            cout << str[0] << ss - 2 << str[ss -1] << '\n';
        }
        else
        {
            cout << str << '\n';
        }
    }

    return 0;
}
