#include <iostream>

using namespace std;

int main()
{
    char c, str[105];
    unsigned short n, i;

    cin >> n;

    bool isPangram = 1;

    if(n < 26)
    {
        cin >> str;
        isPangram = 0;
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            cin >> c;

            if(c <= 'Z')
            {
                str[c - 'A']++;
            }
            else if(c <= 'z')
            {
                str[c - 'a']++;
            }
        }
        for(i = 0; i < 26; i++)
        {
            if(str[i] == 0)
            {
                isPangram = 0;
                break;
            }
        }
    }

    (isPangram)? cout << "Yes" : cout << "No";

    return 0;
}
