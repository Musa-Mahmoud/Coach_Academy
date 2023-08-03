#include <iostream>

using namespace std;

int main()
{
    char ch = 1;
    int str[30] = {};

    while(ch != '}')
    {
        cin >> ch;

        if(ch >= 'a' && ch <= 'z')
        {
            str[ch - 97]++;
        }
    }

    int cnt = 0;
    for(int i = 0; i < 26; i++)
        if(str[i] != 0) cnt++;

    cout << cnt << '\n' ;

    return 0;
}
