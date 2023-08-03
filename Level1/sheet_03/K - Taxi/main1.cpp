#include <iostream>

using namespace std;

int main()
{
    int n, i, sum = 0, groups[5] = {};
    short s;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> s;

        groups[s]++;
    }

    if(groups[2] % 2 == 0)
    {
        sum += (groups[2] >> 1);
        groups[2] = 0;
    }
    else
    {
        sum +=  (groups[2] >> 1);
        groups[2] = 1;

        groups[1] -= 2;
        sum++;
    }

    if(groups[3] > groups[1])
    {
        sum += groups[3];
        groups[3] = 0;
        groups[1] = 0;
    }
    else
    {
        sum += groups[3];
        groups[1] = groups[1] - groups[3];
        groups[3] = 0;
    }

    if(groups[1] > 0)
    {
        if(groups[1] % 4 == 0)
        {
            sum += (groups[1] >> 2);
        }
        else
        {
            sum += ( (groups[1] >> 2) + 1 );
        }

    }

    cout << ( sum + groups[4] ) << "\n";


    return 0;
}
