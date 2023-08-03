#include <iostream>
#include <map>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL);


int main()
{
    FIO

    int n;
    string str;
    map<string, int> mp;

    cin >> n;

    while(n--)
    {
        cin >> str;

        if(mp[str] == 0)
        {
            cout << "OK" << '\n';
            mp[str]++;
        }
        else
        {
            cout << str << mp[str]++ << '\n';
        }
    }

    return 0;
}
