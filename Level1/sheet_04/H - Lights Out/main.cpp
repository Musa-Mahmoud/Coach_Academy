#include <iostream>

using namespace std;

int main()
{
    short a[8][8] = {};

    for(short i = 1; i <= 3; i++)
    {
        for(short j = 1; j <= 3; j++)
        {
            a[i][j] = 1;
        }
    }

    short n;

    for(short i = 1; i <= 3; i++)
    {
        for(short j = 1; j <= 3; j++)
        {
            cin >> n;

            if(1 == n % 2)
            {
                a[i][j]     ^= 1;
                a[i][j - 1] ^= 1;
                a[i][j + 1] ^= 1;
                a[i - 1][j] ^= 1;
                a[i + 1][j] ^= 1;

            }
        }
    }

    for(short i = 1; i <= 3; i++)
    {
        for(short j = 1; j <= 3; j++)
        {
            cout << (char) (a[i][j] + 48);
        }
        cout << '\n';
    }

    return 0;
}
