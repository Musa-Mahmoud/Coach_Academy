#include <iostream>

using namespace std;

int main()
{
    unsigned short n, k, cnt = 0;

    cin >> n >> k;

    while(n--)
    {
        string ch;
        unsigned short str[15] = {}, ss ;

        cin >> ch;

        ss = ch.size();

        for(unsigned short i = 0; i < ss; i++)
        {
            str[ch[i] - '0']++;
        }

        unsigned short isGood = 1;

        for(unsigned short i = 0; i <= k; i++)
        {
            if(str[i] == 0)
            {
                isGood = 0;
                break;
            }
        }

        cnt += isGood;
    }

    cout << cnt << '\n';

    return 0;
}
