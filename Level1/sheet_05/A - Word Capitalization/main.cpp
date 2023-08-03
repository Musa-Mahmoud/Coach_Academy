#include <iostream>

using namespace std;

int main()
{
    char str[1005];

    cin >> str;

    if(str[0] < 93)
        cout << str << '\n';
    else
    {
        str[0] -= 32;
        cout << str << '\n';
    }

    return 0;
}
