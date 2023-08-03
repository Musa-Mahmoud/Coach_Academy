#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str, rstr;

    cin >> str;

    int ss = str.size();

    for(int i = 0; i < ss; i++)
    {
        rstr = str;

        reverse(rstr.begin(), rstr.end());

        if(str == rstr)
        {
            cout << "YES\n";
            return 0;
        }
        else
            str = '0' + str;
    }

    cout << "NO\n";

    return 0;
}
