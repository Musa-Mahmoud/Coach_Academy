#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned short n;

    cin >> n;

    while(n--)
    {
        string str;

        cin >> str;

        sort(str.begin(), str.end());

        unsigned short ss = str.size();
        bool isDiverse = 1;

        for(unsigned short i = ss - 1; i > 0; i--)
        {
            if(str[i] - str[i - 1] != 1)
            {
                isDiverse = 0;
                break;
            }
        }

        (isDiverse)? cout << "Yes\n" : cout << "No\n";
    }


    return 0;
}
