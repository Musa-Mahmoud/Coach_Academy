#include <iostream>
#include <map>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL);


int main()
{
    FIO

    char ch;
    map<char, char> rmp;
    map<char, char> lmp;
    string str, data = "qwertyuiopasdfghjkl;zxcvbnm,./";


    for(int i = 0; i < 30; i++)
    {
        if(i == 0 || i == 10 || i == 20)
            rmp[data[i]] = data[i];
        else
            rmp[data[i]] = data[i - 1];

        if(i == 9 || i == 19 || i == 29)
            lmp[data[i]] = data[i + 1];
        else
            lmp[data[i]] = data[i + 1];
    }

    cin >> ch;

    cin >> str;

    int ss = str.size();

    if(ch == 'R')
    {
        for(int i = 0; i < ss; i++)
            cout << rmp[str[i]];
        cout << '\n';
    }
    else
    {
        for(int i = 0; i < ss; i++)
            cout << lmp[str[i]];
        cout << '\n';
    }

    return 0;
}
