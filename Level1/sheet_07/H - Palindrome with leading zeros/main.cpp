#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str, strOut;

    cin >> str;

    unsigned short ss = str.size();

    for(short i = ss - 1; i >= 0; i--)
    {
        if(str[i] == '0')
            str.pop_back();
        else break;
    }

//    cout << str << '\n' << strOut << '\n';

    strOut = str;

    reverse(str.begin(), str.end());

//    cout << str << '\n' << strOut << '\n';

    (str == strOut)? cout << "Yes\n" : cout << "No\n";

    return 0;
}
